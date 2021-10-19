#include "Pawn.h"
void Pawn::define_moves()
{
    // domyœlnie zdefiniowany jest ruch bia³ego
    possible_moves = new Vector[possible_moves_size];
    possible_moves[0] = Vector(0, -1);
    possible_moves[1] = Vector(0, -2);
}

void Pawn::moved()
{
    possible_moves_size = 1;
    possible_moves = new Vector[possible_moves_size];
    possible_moves[0] = Vector(0, -1);
    has_moved = true;
}

Pawn::Pawn(int _player) : Piece(_player)
{
    symbol = 'P';
    possible_moves_size = 2;
    define_moves();
}