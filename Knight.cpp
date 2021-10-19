#include "Knight.h"

void Knight::define_moves()
{
    possible_moves = new Vector[possible_moves_size];
    possible_moves[0] = Vector(2, 1);
    possible_moves[1] = Vector(1, 2);
    possible_moves[2] = Vector(-1, 2);
    possible_moves[3] = Vector(-2, 1);
    possible_moves[4] = Vector(-2, -1);
    possible_moves[5] = Vector(-1, -2);
    possible_moves[6] = Vector(1, -2);
    possible_moves[7] = Vector(2, -1);
}

void Knight::moved()
{

}

Knight::Knight(int _player) : Piece(_player)
{
    symbol = 'K';
    possible_moves_size = 8;
    define_moves();
}
