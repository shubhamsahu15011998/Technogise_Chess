#include<bits/stdc++.h>
using namespace std;


class moves
{
    static const int maximum_size_of_board = chess_board_configuration::maximum_size_of_board;
    char first_row_name;
    char last_row_name;
    char first_column_name;
    char last_column_name;

public:

    moves()
    {
        chess_board_configuration current_board;
        first_row_name = current_board.get_first_row_name();
        last_row_name = current_board.get_last_row_name();
        first_column_name = current_board.get_first_column_name();
        last_column_name = current_board.get_last_column_name();
    }
    bool validate_row(char row)
    {
        if(row>=first_row_name && row<=last_row_name) return 1;
        else return 0;
    }

    bool validate_column(char column)
    {
        if(column>=first_column_name && column<=last_column_name) return 1;
        else return 0;
    }

    bool validate_move(char row, char column)
    {
        if( validate_row(row) && validate_column(column) ) return 1;
        else return 0;
    }

    void left_diagonal_up_moves(char row, char column, int number_of_steps=maximum_size_of_board)
    {
        for(int index=0; index<number_of_steps; index++)
            if(validate_move( ++row, --column )) cout<<row<<column<<" ";
    }

    void left_diagonal_down_moves(char row, char column, int number_of_steps=maximum_size_of_board)
    {
        for(int index=0; index<number_of_steps; index++)
            if(validate_move( --row, ++column )) cout<<row<<column<<" ";
    }

    void left_diagonal_moves(char row, char column, int number_of_steps=maximum_size_of_board)
    {
        left_diagonal_up_moves(row,column,number_of_steps);
        left_diagonal_down_moves(row,column,number_of_steps);
    }

    void right_diagonal_up_moves(char row, char column, int number_of_steps=maximum_size_of_board)
    {
        for(int index=0; index<number_of_steps; index++)
            if(validate_move( ++row, ++column )) cout<<row<<column<<" ";
    }

    void right_diagonal_down_moves(char row, char column, int number_of_steps=maximum_size_of_board)
    {
        for(int index=0; index<number_of_steps; index++)
            if(validate_move( --row, --column )) cout<<row<<column<<" ";
    }

    void right_diagonal_moves(char row, char column, int number_of_steps=maximum_size_of_board)
    {
        right_diagonal_up_moves(row,column,number_of_steps);
        right_diagonal_down_moves(row,column,number_of_steps);
    }

    void diagonal_moves(char row, char column, int number_of_steps=maximum_size_of_board)
    {
        left_diagonal_moves(row,column,number_of_steps);
        right_diagonal_moves(row,column,number_of_steps);
    }

    void vertical_up_moves(char row, char column, int number_of_steps=maximum_size_of_board)
    {
        for(int index=0; index<number_of_steps; index++)
            if(validate_move( ++row, column )) cout<<row<<column<<" ";
    }

    void vertical_down_moves(char row, char column, int number_of_steps=maximum_size_of_board)
    {
        for(int index=0; index<number_of_steps; index++)
            if( validate_move( --row, column )) cout<<row<<column<<" ";
    }

    void vertical_moves(char row, char column, int number_of_steps=maximum_size_of_board)
    {
        vertical_up_moves(row,column,number_of_steps);
        vertical_down_moves(row,column,number_of_steps);
    }

    void horizontal_left_moves(char row, char column, int number_of_steps=maximum_size_of_board)
    {
        for(int index=0; index<number_of_steps; index++)
            if (validate_move( row, --column )) cout<<row<<column<<" ";
    }

    void horizontal_right_moves(char row, char column, int number_of_steps=maximum_size_of_board)
    {
        for(int index=0; index<number_of_steps; index++)
            if (validate_move( row, ++column )) cout<<row<<column<<" ";
    }

    void horizontal_moves(char row, char column, int number_of_steps=maximum_size_of_board)
    {
        horizontal_left_moves(row,column,number_of_steps);
        horizontal_right_moves(row,column,number_of_steps);
    }

    void straight_moves(char row, char column, int number_of_steps=maximum_size_of_board)
    {
        vertical_moves(row,column,number_of_steps);
        horizontal_moves(row,column,number_of_steps);
    }

    void horse_move(char row, char column)
    {
        if(validate_move( (char)(row+2), (char)(column+1) ))
            cout<<row<<column<<" ";
        if(validate_move( (char)(row+2), (char)(column-1) ))
            cout<<row<<column<<" ";
        if(validate_move( (char)(row-2), (char)(column+1) ))
            cout<<row<<column<<" ";
        if(validate_move( (char)(row-2), (char)(column-1) ))
            cout<<row<<column<<" ";
        if(validate_move( (char)(row+1), (char)(column+2) ))
            cout<<row<<column<<" ";
        if(validate_move( (char)(row+1), (char)(column-2) ))
            cout<<row<<column<<" ";
        if(validate_move( (char)(row-1), (char)(column+2) ))
            cout<<row<<column<<" ";
        if(validate_move( (char)(row-1), (char)(column-2) ))
            cout<<row<<column<<" ";
    }

};

