#include<bits/stdc++.h>
using namespace std;

class horse : public chess
{
public:
    horse(string position): chess(position) {}
    void move_piece()
    {
        moves move_horse;
        move_horse.horse_move(row,column);
    }
};
