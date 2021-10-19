#pragma once
#include "Vector.h"

class Piece
{
public:
    bool player; // 0 - biali, na dole; 1 - czarni, na g�rze
    char symbol; // symbol na mapie

    bool has_moved;

    Vector* possible_moves; // tablica vektorow mozliwych ruch�w wzgledem pionka
    int possible_moves_size; // wielkosc tej tablicy

    virtual void moved() = 0;
    virtual void define_moves() = 0; // nadaawanie waro�ci wektorom w possivle_moves

    Piece(bool _player);
    ~Piece();
};
