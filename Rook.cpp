#include "Rook.h"
void Rook::define_moves()
{
    possible_moves = new Vector[possible_moves_size];

    possible_moves[ 0] = Vector(1, 0);
    possible_moves[ 1] = Vector(2, 0);
    possible_moves[ 2] = Vector(3, 0);
    possible_moves[ 3] = Vector(4, 0);
    possible_moves[ 4] = Vector(5, 0);
    possible_moves[ 5] = Vector(6, 0);
    possible_moves[ 6] = Vector(7, 0);
                    
    possible_moves[ 7] = Vector(0, 1);
    possible_moves[ 8] = Vector(0, 2);
    possible_moves[ 9] = Vector(0, 3);
    possible_moves[10] = Vector(0, 4);
    possible_moves[11] = Vector(0, 5);
    possible_moves[12] = Vector(0, 6);
    possible_moves[13] = Vector(0, 7);

    possible_moves[14] = Vector(-1, 0);
    possible_moves[15] = Vector(-2, 0);
    possible_moves[16] = Vector(-3, 0);
    possible_moves[17] = Vector(-4, 0);
    possible_moves[18] = Vector(-5, 0);
    possible_moves[19] = Vector(-6, 0);
    possible_moves[20] = Vector(-7, 0);

    possible_moves[21] = Vector(0, -1);
    possible_moves[22] = Vector(0, -2);
    possible_moves[23] = Vector(0, -3);
    possible_moves[24] = Vector(0, -4);
    possible_moves[25] = Vector(0, -5);
    possible_moves[26] = Vector(0, -6);
    possible_moves[27] = Vector(0, -7);
}


void Rook::moved()
{

}

Rook::Rook(int _player) : Piece(_player)
{
    symbol = 'R';
    possible_moves_size = 28;
    define_moves();
}