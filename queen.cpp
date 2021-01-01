#include<bits/stdc++.h>
using namespace std;

class queen : public chess
{
public:
    queen(string position): chess(position) {}
    void move_piece()
    {
        moves move_queen;
        move_queen.straight_moves(row,column);
        move_queen.diagonal_moves(row,column);
    }
};
