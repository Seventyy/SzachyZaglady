#include "Bishop.h"
void Bishop::define_moves()
{
    possible_moves = new Vector[possible_moves_size];

    possible_moves[ 0] = Vector(1, 1);
    possible_moves[ 1] = Vector(2, 2);
    possible_moves[ 2] = Vector(3, 3);
    possible_moves[ 3] = Vector(4, 4);
    possible_moves[ 4] = Vector(5, 5);
    possible_moves[ 5] = Vector(6, 6);
    possible_moves[ 6] = Vector(7, 7);

    possible_moves[ 7] = Vector(-1, 1);
    possible_moves[ 8] = Vector(-2, 2);
    possible_moves[ 9] = Vector(-3, 3);
    possible_moves[10] = Vector(-4, 4);
    possible_moves[11] = Vector(-5, 5);
    possible_moves[12] = Vector(-6, 6);
    possible_moves[13] = Vector(-7, 7);

    possible_moves[14] = Vector(-1, -1);
    possible_moves[15] = Vector(-2, -2);
    possible_moves[16] = Vector(-3, -3);
    possible_moves[17] = Vector(-4, -4);
    possible_moves[18] = Vector(-5, -5);
    possible_moves[19] = Vector(-6, -6);
    possible_moves[20] = Vector(-7, -7);

    possible_moves[21] = Vector(1, -1);
    possible_moves[22] = Vector(2, -2);
    possible_moves[23] = Vector(3, -3);
    possible_moves[24] = Vector(4, -4);
    possible_moves[25] = Vector(5, -5);
    possible_moves[26] = Vector(6, -6);
    possible_moves[27] = Vector(7, -7);
}

void Bishop::moved()
{

}

Bishop::Bishop(int _player) : Piece(_player)
{
    symbol = 'B';
    possible_moves_size = 28;
    define_moves();
}