#include<bits/stdc++.h>
using namespace std;

class pawn : public chess
{
public:
    pawn(string position): chess(position) {}
    void move_piece()
    {
        moves move_pawn;
        move_pawn.vertical_up_moves(row,column,1);
    }
};
