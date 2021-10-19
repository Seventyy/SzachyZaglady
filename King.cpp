#include "King.h"
#include <iostream>
void King::define_moves()
{
    possible_moves = new Vector[possible_moves_size];

    possible_moves[0] = Vector(1, 0);
    possible_moves[1] = Vector(1, 1);
    possible_moves[2] = Vector(0, 1);
    possible_moves[3] = Vector(-1, 1);
    possible_moves[4] = Vector(-1, 0);
    possible_moves[5] = Vector(-1, -1);
    possible_moves[6] = Vector(0, -1);
    possible_moves[7] = Vector(1, -1);
}

void King::moved()
{

}

King::King(int _player) : Piece(_player)
{
    symbol = 'M'; // plusminus
    possible_moves_size = 8;
    define_moves();
}