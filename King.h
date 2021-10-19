#pragma once
#include "Piece.h"

class King : public Piece
{
public:
    void define_moves();
    King(int _player);
    void moved();
};