#include<bits/stdc++.h>
using namespace std;

class rook : public chess
{
public:
    rook(string s): chess(s) {}
    void move_piece()
    {
        long i=1;
        while(i)
        {
            if(position[0]>='A' && position[0]<='H' && position[1]-i>'0' && position[1]-i<'9')
            {
                cout<<(char)(position[0])<<(char)(position[1]-i)<<" ";
                i++;
            }
            else i=0;
        }
        i=1;
        while(i)
        {
            if(position[0]>='A' && position[0]<='H' && position[1]+i>'0' && position[1]+i<'9')
            {
                cout<<(char)(position[0])<<(char)(position[1]+i)<<" ";
                i++;
            }
            else i=0;
        }
        i=1;
        while(i)
        {
            if(position[0]+i>='A' && position[0]+i<='H' && position[1]>'0' && position[1]<'9')
            {
                cout<<(char)(position[0]+i)<<(char)(position[1])<<" ";
                i++;
            }
            else i=0;
        }
        i=1;
        while(i)
        {
            if(position[0]-i>='A' && position[0]-i<='H' && position[1]>'0' && position[1]<'9')
            {
                cout<<(char)(position[0]-i)<<(char)(position[1])<<" ";
                i++;
            }
            else i=0;
        }
    }
};
