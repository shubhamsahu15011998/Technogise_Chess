#include<bits/stdc++.h>
using namespace std;

class king : public chess
{
public:
    king(string s): chess(s) {}
    void move_piece()
    {
        if(position[0]-1>='A' && position[0]-1<='H')
        {
            if(position[1]-1>'0' && position[1]-1<'9') cout<<(char)(position[0]-1)<<(char)(position[1]-1)<<" ";
            if(position[1]>'0' && position[1]<'9') cout<<(char)(position[0]-1)<<(char)(position[1])<<" ";
            if(position[1]+1>'0' && position[1]+1<'9') cout<<(char)(position[0]-1)<<(char)(position[1]+1)<<" ";
        }
        if(position[0]>='A' && position[0]<='H')
        {
            if(position[1]-1>'0' && position[1]-1<'9') cout<<(char)(position[0])<<(char)(position[1]-1)<<" ";
            if(position[1]+1>'0' && position[1]+1<'9') cout<<(char)(position[0])<<(char)(position[1]+1)<<" ";
        }
        if(position[0]+1>='A' && position[0]+1<='H')
        {
            if(position[1]-1>'0' && position[1]-1<'9') cout<<(char)(position[0]+1)<<(char)(position[1]-1)<<" ";
            if(position[1]>'0' && position[1]<'9') cout<<(char)(position[0]+1)<<(char)(position[1])<<" ";
            if(position[1]+1>'0' && position[1]+1<'9') cout<<(char)(position[0]+1)<<(char)(position[1]+1)<<" ";
        }
    }
};
