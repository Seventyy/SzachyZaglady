#include <iostream>
#include <windows.h>
#include <minwindef.h>  
// chyba niepotrzebne^

#include "Vector.h"
#include "Piece.h"
#include "Pawn.h"
#include "Knight.h"
#include "Map.h"
#include "Input.h"
#include "GameController.h"
#include "Pirug.h"

int main()
{   
    //piramidki();
    GameController game_controller;
    game_controller.execute_turn(0);


    // na podśiwetlonych tilach moznaby wyśiwetlać kordy
}































/*

  Vector* calculate_possible(Vector _selected)
    {
        if (!tile[_selected.x][_selected.y]) return new Vector(-1, -1);

        Vector* highlighted_candidate = new Vector[tile[_selected.x][_selected.y]->possible_moves_size];

        int j = 0;
        for (int i = 0; i < tile[_selected.x][_selected.y]->possible_moves_size; i++)
        {
            //std::cout << "test: (" << i << ", " << j << "), " << a << std::endl;
            Vector candidate = tile[_selected.x][_selected.y]->player ?
                Vector(_selected.x, _selected.y) - tile[_selected.x][_selected.y]->possible_moves[i] :
                Vector(_selected.x, _selected.y) + tile[_selected.x][_selected.y]->possible_moves[i];

            if ((candidate) >= Vector(0, 0) && (candidate) <= Vector(7, 7))
            {
                highlighted_candidate[j] = candidate;
                j++;
            }
        }

        Vector* highlighted = new Vector[j];

        for (int i = 0; i < j; i++)
        {
            highlighted[i] = highlighted_candidate[i];
        }

        delete[] highlighted_candidate;
        highlighted[j] = Vector();

        //for (int i = 0; i < tile[_selected.x][_selected.y]->possible_moves_size; i++) std::cout << "(" << highlighted[i].x << ", " << highlighted[i].y << ")\n";
        return highlighted;
    }

        //map.print(Vector());

    //Vector* highlighted = new Vector[8];
    //highlighted[0] = Vector(1, 2);
    //highlighted[1] = Vector(1, 2);
    //highlighted[2] = Vector(1, 2);
    //highlighted[3] = Vector(1, 2);
    //highlighted[4] = Vector(1, 2);

    //delete &highlighted[7];
    //for (int i = 0; i < 8; i++) std::cout << "(" << highlighted[i].x << ", " << highlighted[i].y << ")\n";


*/
 