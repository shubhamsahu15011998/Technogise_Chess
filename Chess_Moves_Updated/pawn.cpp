#include<bits/stdc++.h>
using namespace std;

class pawn : public chess
{
public:
    pawn(string s): chess(s) {}
    void move_piece()
    {
        if(position[0]+1>='A' && position[0]+1<='H')
            cout<<(char)(position[0]+1)<<(char)(position[1])<<" ";
    }
};
