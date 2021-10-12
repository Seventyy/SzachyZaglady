#pragma once
#include "Piece.h"

class Rook : public Piece
{
public:
    void define_moves();
    Rook(int _player);
};