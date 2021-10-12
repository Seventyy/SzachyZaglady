#pragma once
#include "Piece.h"
#include "Vector.h"

class Map
{
public:
    Piece* tile[8][8]; // tablica wskaŸników to pionków
    Vector selected = Vector();

    void clear(); // nadpisanie nullptr 
    void build(); // stworzenie pionków i przypisanie ich adresów tile i nadanie pozycji wewn¹trz pionków

    bool select(Vector _vec);
    Vector* calculate_possible();
    

    void print(Vector* _highlighted);

    void move(Vector intent);

    Map();
    ~Map();
};
