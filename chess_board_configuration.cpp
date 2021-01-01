#include<bits/stdc++.h>
using namespace std;

class chess_board_configuration
{
    const char first_row_name = 'A';
    const char last_row_name = 'H';
    const char first_column_name = '1';
    const char last_column_name = '8';

public:

    static const int maximum_size_of_board = 8;

    char get_first_row_name()
    {
        return first_row_name;
    }
    char get_last_row_name()
    {
        return last_row_name;
    }
    char get_first_column_name()
    {
        return first_column_name;
    }
    char get_last_column_name()
    {
        return last_column_name;
    }
};
