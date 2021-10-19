#pragma once
#include "Piece.h"

class Pawn : public Piece
{
public:
    void define_moves();
    void moved();
    Pawn(int _player);
};