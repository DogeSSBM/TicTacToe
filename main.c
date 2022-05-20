#include "Includes.h"

typedef unsigned int uint;

typedef enum{M_E, M_X, M_O, M_N}Marker; //Markers
char MarkerChar[M_N] = {' ', 'X', 'O'};
typedef Marker Board[3][3];

/*

 X |   | O
---+---+---
 X | X | O
---+---+---
 X |   | O

*/

char boardAt(Board board, const uint x, const uint y)
{
    return MarkerChar[board[x][y]];
}

void printAt(Board board, uint x, uint y){
    printf(" %c %c", boardAt(board, x, y), x < 2 ? '|' : '\n');
}

void boardPrint(Board board)
{
    for(uint y = 0; y < 3; ++y)
    {
        for(uint x = 0; x < 3; ++x)
        {
            printAt(board, x, y);
        }
        if(y < 2)
            printf("---+---+---\n");
    }
    printf("\n");
}

uint numFreeBefore(Board board, const uint n)
{
    uint total = 0;
    uint i = 0;
    for(uint y = 0; y < 3; y++){
        for(uint x = 0; x < 3; x++){
            if(i >= n)
                return total;
            total += board[x][y] == M_E;
            i++;
        }
    }
    return total;
}

void markRandom(Board board, const Marker mark)
{
    const uint
    const uint n = rand()%(numFree(board, n) );
    board[n%3][n/3 + n%3] = mark;
}

Marker markInv(const Marker mark)
{
    if(mark == M_E)
        return M_E;
    return mark == M_X ? M_O : M_X;
}

int main(int argc, char const *argv[])
{
    srand(time(0));
    Board board = {0};

    Marker cur = M_X;
    boardPrint(board);
    for(uint i = 0; i < 9; i++){
        markRandom(board, cur);
        boardPrint(board);
        cur = markInv(cur);
    }

    boardPrint(board);
    printf("Hello world!\n");

    return 0;
}
