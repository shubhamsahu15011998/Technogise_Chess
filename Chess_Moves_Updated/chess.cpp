#include<bits/stdc++.h>
using namespace std;

class chess
{
protected:
    string position;
public:
    chess(string s)
    {position=s;}
    virtual void move_piece() {}
};
