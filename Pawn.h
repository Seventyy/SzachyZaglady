#pragma once
#include "Piece.h"

class Pawn : public Piece
{
public:
    void define_moves();
    Pawn(int _player);
};