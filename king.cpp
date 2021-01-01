#include<bits/stdc++.h>
using namespace std;

class king : public chess
{
public:
    king(string position): chess(position) {}
    void move_piece()
    {
        moves move_king;
        move_king.straight_moves(row,column,1);
        move_king.diagonal_moves(row,column,1);
    }
};
