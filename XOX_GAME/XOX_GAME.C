#include <stdio.h>

char board[3][3];
int row;
int column;
char mark = 'x';


void inside_board()
{
    int l;
    int k;
    for(l=0;l<=2;l++)
    {
        for(k=0;k<=2;k++)
            board[l][k] = '-';
    }
}

void display_board()
{
    printf("\n");
    printf("|   %c   |   %c   |   %c   |\n",board[0][0],board[0][1],board[0][2]);
    printf("|   %c   |   %c   |   %c   |\n",board[1][0],board[1][1],board[1][2]);
    printf("|   %c   |   %c   |   %c   |",board[2][0],board[2][1],board[2][2]);
    printf("\n");
}

void select_move()
{
    printf("\nplease enter your row: ");
    scanf("%d",&row);
    printf("\nplease enter your column: ");
    scanf("%d",&column);
    board[row-1][column-1] = mark;
}

void chance_player()
{
    if(mark == 'x')
        mark = 'o';
    else
        mark = 'x';
}

int check_winner()
{
    int i;

    for(i=0;i<=2;i++)
        if((board[0][i] == board[1][i]) && (board[1][i] == board[2][i]) && board[0][i] != '-')
            return 1;
    for(i=0;i<=2;i++)
        if((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]) && board[i][0] != '-')
            return 1;
    if((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]) && board[1][1] != '-')
            return 1;
    if((board[0][2] == board[1][1]) && (board[1][1] == board[2][0]) && board[1][1] != '-')
            return 1;
    return 0;
}

int main()
{
    int k;

    k = 1;
    inside_board();
    while(k<=9)
    {
        display_board();
        select_move();
        if(check_winner() == 1)
        {
            display_board();
            printf(" OYUNU %c KAZANDI ",mark);
            return 0;
        }
        chance_player();
        k++;
    }
    display_board();
    printf("\nOYUN BERABERE !!!");
    return 0;
}
