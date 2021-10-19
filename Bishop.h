#pragma once
#include "Piece.h"

class Bishop : public Piece
{
public:
    void define_moves();
    Bishop(int _player);
    void moved();
};