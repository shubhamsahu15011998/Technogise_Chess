#include<bits/stdc++.h>
using namespace std;

class horse : public chess
{
public:
    horse(string s): chess(s) {}
    void move_piece()
    {
        if(position[0]+2>='A' && position[0]+2<='H' && position[1]+1>'0' && position[1]+1<'9')
            cout<<(char)(position[0]+2)<<(char)(position[1]+1)<<" ";
        if(position[0]+2>='A' && position[0]+2<='H' && position[1]-1>'0' && position[1]-1<'9')
            cout<<(char)(position[0]+2)<<(char)(position[1]-1)<<" ";
        if(position[0]+1>='A' && position[0]+1<='H' && position[1]+2>'0' && position[1]+2<'9')
            cout<<(char)(position[0]+1)<<(char)(position[1]+2)<<" ";
        if(position[0]+1>='A' && position[0]+1<='H' && position[1]-2>'0' && position[1]-2<'9')
            cout<<(char)(position[0]+1)<<(char)(position[1]-2)<<" ";
        if(position[0]-2>='A' && position[0]-2<='H' && position[1]+1>'0' && position[1]+1<'9')
            cout<<(char)(position[0]-2)<<(char)(position[1]+1)<<" ";
        if(position[0]-2>='A' && position[0]-2<='H' && position[1]-1>'0' && position[1]-1<'9')
            cout<<(char)(position[0]-2)<<(char)(position[1]-1)<<" ";
        if(position[0]-1>='A' && position[0]-1<='H' && position[1]+2>'0' && position[1]+2<'9')
            cout<<(char)(position[0]-1)<<(char)(position[1]+2)<<" ";
        if(position[0]-1>='A' && position[0]-1<='H' && position[1]-2>'0' && position[1]-2<'9')
            cout<<(char)(position[0]-1)<<(char)(position[1]-2)<<" ";
    }
};
