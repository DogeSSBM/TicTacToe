#include "Includes.h"

typedef enum{M_X, M_O, M_E, M_N}Marker; //Markers
char MarkerChar[M_N] = {'X', 'O', ' '};
typedef Marker Board[3][3];

/*

 X |   | O
---+---+---
 X | X | O
-----------
 X |   | O

*/

void boardPrint(Board board)
{
    printf("%c", MarkerChar[board[x][y]]);
}


int main(int argc, char const *argv[])
{
    printf("Hello world!\n");
    Board board = {0};

    return 0;
}
