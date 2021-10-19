#pragma once
#include "Piece.h"

class Queen : public Piece
{
public:
    void define_moves();
    Queen(int _player);
    void moved();
};