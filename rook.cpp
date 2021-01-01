#include<bits/stdc++.h>
using namespace std;

class rook : public chess
{
public:
    rook(string position): chess(position) {}
    void move_piece()
    {
        moves move_rook;
        move_rook.straight_moves(row,column);
    }
};
