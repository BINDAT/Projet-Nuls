#include <stdio.h>

int main()
{
    char tictactoe[3][3];
    int x,y;

    /* Initialise la matrice */
        x = 0;
        while(x<3)
        {
            y = 0;
            while(y<3)
            {
                tictactoe[x][y] = '.';
                y++;
            }
            x++;
        }
        tictactoe[1][1] = 'X';
    
    /* Affiche le plateau */
        puts("Une partie de Tic-Tac-Toe ?");
        x = 0;
        while(x<3)
        {
            y = 0;
            while(y<3)
            {
                printf("%c\t", tictactoe[x][y]);
                y++;
            }
            putchar('\n');
            x++;
        }
        return(0);
}