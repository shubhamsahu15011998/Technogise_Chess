#include<iostream>
using namespace std;

class chess
{
protected:
    string pos;
public:
    chess(string s)
    {   pos=s;  }
    virtual void move_()
    {}
};
class king : public chess
{
public:
    king(string s): chess(s) {}
    void move_()
    {
        if(pos[0]-1>='A' && pos[0]-1<='H')
        {
            if(pos[1]-1>'0' && pos[1]-1<'9') cout<<(char)(pos[0]-1)<<(char)(pos[1]-1)<<" ";
            if(pos[1]>'0' && pos[1]<'9') cout<<(char)(pos[0]-1)<<(char)(pos[1])<<" ";
            if(pos[1]+1>'0' && pos[1]+1<'9') cout<<(char)(pos[0]-1)<<(char)(pos[1]+1)<<" ";
        }
        if(pos[0]>='A' && pos[0]<='H')
        {
            if(pos[1]-1>'0' && pos[1]-1<'9') cout<<(char)(pos[0])<<(char)(pos[1]-1)<<" ";
            if(pos[1]+1>'0' && pos[1]+1<'9') cout<<(char)(pos[0])<<(char)(pos[1]+1)<<" ";
        }
        if(pos[0]+1>='A' && pos[0]+1<='H')
        {
            if(pos[1]-1>'0' && pos[1]-1<'9') cout<<(char)(pos[0]+1)<<(char)(pos[1]-1)<<" ";
            if(pos[1]>'0' && pos[1]<'9') cout<<(char)(pos[0]+1)<<(char)(pos[1])<<" ";
            if(pos[1]+1>'0' && pos[1]+1<'9') cout<<(char)(pos[0]+1)<<(char)(pos[1]+1)<<" ";
        }
    }
};

class queen : public chess
{
public:
    queen(string s): chess(s) {}
    void move_()
    {
        long i=1;
        while(i)
        {
            if(pos[0]-i>='A' && pos[0]-i<='H'&& pos[1]-i>'0' && pos[1]-i<'9')
            {
                cout<<(char)(pos[0]-i)<<(char)(pos[1]-i)<<" ";
                i++;
            }
            else i=0;
        }
        i=1;
        while(i)
        {
            if(pos[0]+i>='A' && pos[0]+i<='H'&& pos[1]+i>'0' && pos[1]+i<'9')
            {
                cout<<(char)(pos[0]+i)<<(char)(pos[1]+i)<<" ";
                i++;
            }
            else i=0;
        }
        i=1;
        while(i)
        {
            if(pos[0]+i>='A' && pos[0]+i<='H'&& pos[1]-i>'0' && pos[1]-i<'9')
            {
                cout<<(char)(pos[0]+i)<<(char)(pos[1]-i)<<" ";
                i++;
            }
            else i=0;
        }
        i=1;
        while(i)
        {
            if(pos[0]-i>='A' && pos[0]-i<='H'&& pos[1]+i>'0' && pos[1]+i<'9')
            {
                cout<<(char)(pos[0]-i)<<(char)(pos[1]+i)<<" ";
                i++;
            }
            else i=0;
        }
        i=1;
        while(i)
        {
            if(pos[0]>='A' && pos[0]<='H'&& pos[1]+i>'0' && pos[1]+i<'9')
            {
                cout<<(char)(pos[0])<<(char)(pos[1]+i)<<" ";
                i++;
            }
            else i=0;
        }
        i=1;
        while(i)
        {
            if(pos[0]>='A' && pos[0]<='H'&& pos[1]-i>'0' && pos[1]-i<'9')
            {
                cout<<(char)(pos[0])<<(char)(pos[1]-i)<<" ";
                i++;
            }
            else i=0;
        }
        i=1;
        while(i)
        {
            if(pos[0]+i>='A' && pos[0]+i<='H'&& pos[1]>'0' && pos[1]<'9')
            {
                cout<<(char)(pos[0]+i)<<(char)(pos[1])<<" ";
                i++;
            }
            else i=0;
        }
        i=1;
        while(i)
        {
            if(pos[0]-i>='A' && pos[0]-i<='H'&& pos[1]>'0' && pos[1]<'9')
            {
                cout<<(char)(pos[0]-i)<<(char)(pos[1])<<" ";
                i++;
            }
            else i=0;
        }
    }
};

class bishop : public chess
{
public:
    bishop(string s): chess(s) {}
    void move_()
    {
        long i=1;
        while(i)
        {
            if(pos[0]-i>='A' && pos[0]-i<='H'&& pos[1]-i>'0' && pos[1]-i<'9')
            {
                cout<<(char)(pos[0]-i)<<(char)(pos[1]-i)<<" ";
                i++;
            }
            else i=0;
        }
        i=1;
        while(i)
        {
            if(pos[0]+i>='A' && pos[0]+i<='H'&& pos[1]+i>'0' && pos[1]+i<'9')
            {
                cout<<(char)(pos[0]+i)<<(char)(pos[1]+i)<<" ";
                i++;
            }
            else i=0;
        }
        i=1;
        while(i)
        {
            if(pos[0]+i>='A' && pos[0]+i<='H'&& pos[1]-i>'0' && pos[1]-i<'9')
            {
                cout<<(char)(pos[0]+i)<<(char)(pos[1]-i)<<" ";
                i++;
            }
            else i=0;
        }
        i=1;
        while(i)
        {
            if(pos[0]-i>='A' && pos[0]-i<='H'&& pos[1]+i>'0' && pos[1]+i<'9')
            {
                cout<<(char)(pos[0]-i)<<(char)(pos[1]+i)<<" ";
                i++;
            }
            else i=0;
        }
    }
};

class horse : public chess
{
public:
    horse(string s): chess(s) {}
    void move_()
    {
        if(pos[0]+2>='A' && pos[0]+2<='H'&& pos[1]+1>'0' && pos[1]+1<'9')
            cout<<(char)(pos[0]+2)<<(char)(pos[1]+1)<<" ";
        if(pos[0]+2>='A' && pos[0]+2<='H'&& pos[1]-1>'0' && pos[1]-1<'9')
            cout<<(char)(pos[0]+2)<<(char)(pos[1]-1)<<" ";
        if(pos[0]+1>='A' && pos[0]+1<='H'&& pos[1]+2>'0' && pos[1]+2<'9')
            cout<<(char)(pos[0]+1)<<(char)(pos[1]+2)<<" ";
        if(pos[0]+1>='A' && pos[0]+1<='H'&& pos[1]-2>'0' && pos[1]-2<'9')
            cout<<(char)(pos[0]+1)<<(char)(pos[1]-2)<<" ";
        if(pos[0]-2>='A' && pos[0]-2<='H'&& pos[1]+1>'0' && pos[1]+1<'9')
            cout<<(char)(pos[0]-2)<<(char)(pos[1]+1)<<" ";
        if(pos[0]-2>='A' && pos[0]-2<='H'&& pos[1]-1>'0' && pos[1]-1<'9')
            cout<<(char)(pos[0]-2)<<(char)(pos[1]-1)<<" ";
        if(pos[0]-1>='A' && pos[0]-1<='H'&& pos[1]+2>'0' && pos[1]+2<'9')
            cout<<(char)(pos[0]-1)<<(char)(pos[1]+2)<<" ";
        if(pos[0]-1>='A' && pos[0]-1<='H'&& pos[1]-2>'0' && pos[1]-2<'9')
            cout<<(char)(pos[0]-1)<<(char)(pos[1]-2)<<" ";
    }
};

class rook : public chess
{
public:
    rook(string s): chess(s) {}
    void move_()
    {
        long i=1;
        while(i)
        {
            if(pos[0]>='A' && pos[0]<='H'&& pos[1]-i>'0' && pos[1]-i<'9')
            {
                cout<<(char)(pos[0])<<(char)(pos[1]-i)<<" ";
                i++;
            }
            else i=0;
        }
        i=1;
        while(i)
        {
            if(pos[0]>='A' && pos[0]<='H'&& pos[1]+i>'0' && pos[1]+i<'9')
            {
                cout<<(char)(pos[0])<<(char)(pos[1]+i)<<" ";
                i++;
            }
            else i=0;
        }
        i=1;
        while(i)
        {
            if(pos[0]+i>='A' && pos[0]+i<='H'&& pos[1]>'0' && pos[1]<'9')
            {
                cout<<(char)(pos[0]+i)<<(char)(pos[1])<<" ";
                i++;
            }
            else i=0;
        }
        i=1;
        while(i)
        {
            if(pos[0]-i>='A' && pos[0]-i<='H'&& pos[1]>'0' && pos[1]<'9')
            {
                cout<<(char)(pos[0]-i)<<(char)(pos[1])<<" ";
                i++;
            }
            else i=0;
        }
    }
};

class pawn : public chess
{
public:
    pawn(string s): chess(s) {}
    void move_()
    {
        if(pos[0]+1>='A' && pos[0]+1<='H')
            cout<<(char)(pos[0]+1)<<(char)(pos[1])<<" ";
    }
};
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1=="King")
    {
        chess *obj = new king(s2);
        obj->move_();
    }
    else if(s1=="Queen")
    {
        chess *obj = new queen(s2);
        obj->move_();
    }
    else if(s1=="Bishop")
    {
        chess *obj = new bishop(s2);
        obj->move_();
    }
    else if(s1=="Horse")
    {
        chess *obj = new horse(s2);
        obj->move_();
    }
    else if(s1=="Rook")
    {
        chess *obj = new rook(s2);
        obj->move_();
    }
    else if(s1=="Pawn")
    {
        chess *obj = new pawn(s2);
        obj->move_();
    }

    return 0;
}
/*
#include <iostream>
using namespace std;
class MyBaseClass {
   public:
   MyBaseClass(int x) {
      cout << "Constructor of base class: " << x << endl;
   }
};
class MyDerivedClass : public MyBaseClass { //base constructor as initializer list
   public:
      MyDerivedClass(int x, int y) : MyBaseClass(x) {
         cout << "Constructor of derived class: " << y << endl;
      }
};
int main() {
   MyDerivedClass derived(100,50);
}
*/
