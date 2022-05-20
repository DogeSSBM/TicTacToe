#include "Includes.h"

typedef unsigned int uint;

typedef enum{M_X, M_O, M_E, M_N}Marker; //Markers
char MarkerChar[M_N] = {'X', 'O', ' '};
typedef Marker Board[3][3];

/*

 X |   | O
---+---+---
 X | X | O
---+---+---
 X |   | O

*/

void boardPrint(Board board)
{

    for(uint y = 0; y < 3; ++y)
    {
        for(uint x = 0; x < 3; ++x)
        {
            board[x][y] = '-';
            printf("%c", MarkerChar[board[x][y]]);
        }
        printf("\n");
    }
}



int main(int argc, char const *argv[])
{
    Board board = {0};
    board[1][0] = {M_X};
    board[1][1] = {M_O};
    board[0][2] = {M_O};
    board[2][2] = {M_X};
    boardPrint(board);
    printf("Hello world!\n");

    return 0;
}
