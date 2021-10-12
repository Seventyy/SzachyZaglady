#include <iostream>
#include <windows.h>
#include "Pawn.h"
#include "Knight.h"
#include "Bishop.h"
#include "Rook.h"
#include "Queen.h"
#include "King.h"
#include "Map.h"


void Map::clear() // nadpisanie nullptr 
{
    for (int j = 0; j < 8; j++)
    {
        for (int i = 0; i < 8; i++)
        {
            tile[i][j] = nullptr;
        }
    }
}

void Map::build() // stworzenie pionków i przypisanie ich adresów tile i nadanie pozycji wewn¹trz pionków
{
    // pionki
    for (int i = 0; i < 8; i++) tile[i][1] = new Pawn(1);
    for (int i = 0; i < 8; i++) tile[i][6] = new Pawn(0);

    // skoczki
    tile[1][0] = new Knight(1);
    tile[6][0] = new Knight(1);
    tile[1][7] = new Knight(0);
    tile[6][7] = new Knight(0);

    // goñce
    tile[2][0] = new Bishop(1);
    tile[5][0] = new Bishop(1);
    tile[2][7] = new Bishop(0);
    tile[5][7] = new Bishop(0);

    // wie¿e
    tile[0][0] = new Rook(1);
    tile[7][0] = new Rook(1);
    tile[0][7] = new Rook(0);
    tile[7][7] = new Rook(0);

    // królowe
    tile[3][0] = new Queen(1);
    tile[3][7] = new Queen(0);

    // króle
    tile[4][0] = new King(1);
    tile[4][7] = new King(0);


}

bool Map::select(Vector _vec)
{
    if (!tile[_vec.x][_vec.y])
    {
        selected = Vector();
        return 0;
    }
    selected = _vec;
    return 1;
}

Vector* Map::calculate_possible()
{
    // ca³oœ s³abo zrobiona, powinienem sprawdzaæ pola na zewn¹trz od figury 
    // do kolizji z inn¹ lub œcian¹, za póŸno na zmianê
    if (!tile[selected.x][selected.y] || !selected) return new Vector(-1, -1);

    int max_cantidate_number = tile[selected.x][selected.y]->possible_moves_size;
    Vector* highlighted_candidate = new Vector[max_cantidate_number];
    int actual_aviable_amount = 0;
    
    // czy mieœci siê na planszy
    for (int i = 0; i < tile[selected.x][selected.y]->possible_moves_size; i++)
    {
        //std::cout << "test: (" << i << ", " << j << "), " << a << std::endl;
        Vector candidate = tile[selected.x][selected.y]->player ?
            Vector(selected.x, selected.y) - tile[selected.x][selected.y]->possible_moves[i] :
            Vector(selected.x, selected.y) + tile[selected.x][selected.y]->possible_moves[i];

        if (candidate >= Vector(0, 0) && candidate <= Vector(7, 7))
        {
            actual_aviable_amount++;
            highlighted_candidate[i] = candidate;
        }
    }

    // czy stoi tam sojusznik
    for (int i = 0; i < max_cantidate_number; i++)
    {
        if (highlighted_candidate[i].x != -1 && 
            tile[highlighted_candidate[i].x][highlighted_candidate[i].y] &&
            tile[highlighted_candidate[i].x][highlighted_candidate[i].y]->player ==
            tile[selected.x][selected.y]->player)
        {
            actual_aviable_amount--;
            highlighted_candidate[i] = Vector();
        }
    }

    // czy po drodze jest inna wie¿a
    //if (typeid(tile[selected.x][selected.y]) != typeid(Knight)||
    //    typeid(tile[selected.x][selected.y]) != typeid(King)) // chyba nie dzia³a
    if (tile[selected.x][selected.y]->symbol != 'K' &&
        tile[selected.x][selected.y]->symbol != 'M') // to wy¿ej naprawiæ
    {
        for (int i = 0; i < max_cantidate_number; i++)
        {
            if (!highlighted_candidate[i]) continue;
    
            Vector relative_movement = highlighted_candidate[i] - selected;
            int relative_length = max(abs(relative_movement.x), abs(relative_movement.y));
            Vector normalised_movement = relative_movement / relative_length;
    
            for (int j = 1; j < relative_length ; j++)
            {
                Vector step = selected + normalised_movement * j;
                if (!!tile[step.x][step.y])
                {
                    actual_aviable_amount--;
                    highlighted_candidate[i] = Vector();
                    break;
                }
            }
        }
    }

    Vector* highlighted = new Vector[actual_aviable_amount + 1];

    int j = 0;
    for (int i= 0;i <max_cantidate_number;i++)
    {
        if (!!highlighted_candidate[i])
        {
            highlighted[j] = highlighted_candidate[i];
            j++;
        }
    }

    delete[] highlighted_candidate;
    highlighted[actual_aviable_amount] = Vector();

    //for (int i = 0; i < tile[_selected.x][_selected.y]->possible_moves_size; i++) std::cout << "(" << highlighted[i].x << ", " << highlighted[i].y << ")\n";
    return highlighted;
}

void Map::print(Vector* _highlighted)
{
    // kolory
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    char foreground = 0, background = 0;

    // górna krawêdŸ
    std::cout << "  A B C D E F G H" << std::endl;
    std::cout << ' ' << char(218);
    for (int i = 0; i < 16; i++) std::cout << char(196);
    std::cout << char(191) << std::endl;

    for (int j = 0; j < 8; j++)
    {
        std::cout << j + 1 << char(179);
        for (int i = 0; i < 8; i++)
        {
            if (tile[i][j])
            {
                foreground = (tile[i][j]->player) ? 0 : 15; // nadanie koloru tekstowi zale¿nie od gracza 
            }

            background = (i + j) % 2 + 7; // szachownica
            for (int a = 0; !!_highlighted[a]; a++) // podœwietlenie
            {
                if (_highlighted[a].x == i && _highlighted[a].y == j)
                    background = 11;
            }

            SetConsoleTextAttribute(hConsole, foreground + background * 16); // tu mo¿na sumowaniem binarnym

            // rysowanie pionka/pustego pola
            if (tile[i][j])
                std::cout << tile[i][j]->symbol << ' ';
            else
                std::cout << ' ' << ' ';
        }
        SetConsoleTextAttribute(hConsole, 7);
        std::cout << char(179) << std::endl;
    }
    // dolna krawêdŸ
    std::cout << ' ' << char(192);
    for (int i = 0; i < 16; i++) std::cout << char(196);
    std::cout << char(217) << std::endl;
}

void Map::move(Vector _intent)
{
    tile[_intent.x][_intent.y] = tile[selected.x][selected.y];
    tile[selected.x][selected.y] = nullptr;
}

Map::Map()
{
    clear();
}
Map::~Map()
{
    clear();
}