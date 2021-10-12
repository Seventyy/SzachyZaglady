#include "Piece.h"

Piece::Piece(bool _player)
{
    player = _player;
}
Piece::~Piece()
{
    delete[] possible_moves;
}
