#include<bits/stdc++.h>
using namespace std;

class chess
{
protected:
    char row;
    char column;
public:
    chess(string position)
    {
        row = position[0];
        column = position[1];
    }
    virtual void move_piece() {}
};
