#include<bits/stdc++.h>
using namespace std;

class bishop : public chess
{
public:
    bishop(string position): chess(position) {}
    void move_piece()
    {
        moves move_bishop;
        move_bishop.diagonal_moves(row,column);
    }
};
