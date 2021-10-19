#include "Queen.h"
void Queen::define_moves()
{
    possible_moves = new Vector[possible_moves_size];

    // prawo
    possible_moves[0] = Vector(1, 0);
    possible_moves[1] = Vector(2, 0);
    possible_moves[2] = Vector(3, 0);
    possible_moves[3] = Vector(4, 0);
    possible_moves[4] = Vector(5, 0);
    possible_moves[5] = Vector(6, 0);
    possible_moves[6] = Vector(7, 0);
    // dol prawo
    possible_moves[7] = Vector(1, 1);
    possible_moves[8] = Vector(2, 2);
    possible_moves[9] = Vector(3, 3);
    possible_moves[10] = Vector(4, 4);
    possible_moves[11] = Vector(5, 5);
    possible_moves[12] = Vector(6, 6);
    possible_moves[13] = Vector(7, 7);
    // dol
    possible_moves[14] = Vector(0, 1);
    possible_moves[15] = Vector(0, 2);
    possible_moves[16] = Vector(0, 3);
    possible_moves[17] = Vector(0, 4);
    possible_moves[18] = Vector(0, 5);
    possible_moves[19] = Vector(0, 6);
    possible_moves[20] = Vector(0, 7);
    // dol lewo
    possible_moves[21] = Vector(-1, 1);
    possible_moves[22] = Vector(-2, 2);
    possible_moves[23] = Vector(-3, 3);
    possible_moves[24] = Vector(-4, 4);
    possible_moves[25] = Vector(-5, 5);
    possible_moves[26] = Vector(-6, 6);
    possible_moves[27] = Vector(-7, 7);
    // lewo
    possible_moves[28] = Vector(-1, 0);
    possible_moves[29] = Vector(-2, 0);
    possible_moves[30] = Vector(-3, 0);
    possible_moves[31] = Vector(-4, 0);
    possible_moves[32] = Vector(-5, 0);
    possible_moves[33] = Vector(-6, 0);
    possible_moves[34] = Vector(-7, 0);
    // gora lewo    
    possible_moves[35] = Vector(-1, -1);
    possible_moves[36] = Vector(-2, -2);
    possible_moves[37] = Vector(-3, -3);
    possible_moves[38] = Vector(-4, -4);
    possible_moves[39] = Vector(-5, -5);
    possible_moves[40] = Vector(-6, -6);
    possible_moves[41] = Vector(-7, -7);
    // gora 
    possible_moves[42] = Vector(0, -1);
    possible_moves[43] = Vector(0, -2);
    possible_moves[44] = Vector(0, -3);
    possible_moves[45] = Vector(0, -4);
    possible_moves[46] = Vector(0, -5);
    possible_moves[47] = Vector(0, -6);
    possible_moves[48] = Vector(0, -7);
    // gora prawo
    possible_moves[49] = Vector(1, -1);
    possible_moves[50] = Vector(2, -2);
    possible_moves[51] = Vector(3, -3);
    possible_moves[52] = Vector(4, -4);
    possible_moves[53] = Vector(5, -5);
    possible_moves[54] = Vector(6, -6);
    possible_moves[55] = Vector(7, -7);
}


void Queen::moved()
{

}

Queen::Queen(int _player) : Piece(_player)
{
    symbol = 'Q';
    possible_moves_size = 56;
    define_moves();
}