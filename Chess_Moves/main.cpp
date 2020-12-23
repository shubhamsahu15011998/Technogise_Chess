#include<bits/stdc++.h>
#include"chess.cpp"
#include"king.cpp"
#include"queen.cpp"
#include"bishop.cpp"
#include"horse.cpp"
#include"rook.cpp"
#include"pawn.cpp"

using namespace std;

chess* create_chess_piece(string piece_name, string piece_position)
{
    // switch case with string as it's parameter is not allowed in C++
    try
    {
        if(piece_name=="king")
            return new king(piece_position);
        else if(piece_name=="queen")
            return new queen(piece_position);
        else if(piece_name=="bishop")
            return new bishop(piece_position);
        else if(piece_name=="horse")
            return new horse(piece_position);
        else if(piece_name=="rook")
            return new rook(piece_position);
        else if(piece_name=="pawn")
            return new pawn(piece_position);
        else throw;
    }
    catch(...){
        cout<< "Please enter a valid chess piece";
        return NULL;
    }
}

void input(string &piece_name,string &piece_position)
{
    cin>>piece_name>>piece_position;
    for(int i=0;i<piece_name.length();i++)
        piece_name[i]=tolower(piece_name[i]);
}

int main()
{
    string piece_name,piece_position;
    chess *chess_ = NULL;
    while(chess_==NULL)
    {
        input(piece_name,piece_position);
        chess_ = create_chess_piece(piece_name,piece_position);
    }
    chess_->move_piece();
    return 0;
}
