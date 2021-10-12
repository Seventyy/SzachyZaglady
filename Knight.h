#pragma once
#include "Piece.h"

class Knight : public Piece
{
public:
    void define_moves();
    Knight(int _player);
};