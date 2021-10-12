#pragma once
#include "Piece.h"
#include "Vector.h"

class Map
{
public:
    Piece* tile[8][8]; // tablica wska�nik�w to pionk�w
    Vector selected = Vector();

    void clear(); // nadpisanie nullptr 
    void build(); // stworzenie pionk�w i przypisanie ich adres�w tile i nadanie pozycji wewn�trz pionk�w

    bool select(Vector _vec);
    Vector* calculate_possible();
    

    void print(Vector* _highlighted);

    void move(Vector intent);

    Map();
    ~Map();
};
