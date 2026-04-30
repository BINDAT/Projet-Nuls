#include <stdio.h>

int main()
{
    char tictactoe[3][3][3];
    int x,y,z;

    /* Initialise la matrice */
        for (x= 0; x<3; x++)
            for (y=0; y<3; y++)
                for (z=0; z<3; z++)
                    tictactoe[x][y][z] = '.';
        tictactoe[1][1][1] = 'X';
    
    /* Affiche le plateau */
        puts("Une partie de Tic-Tac-Toe ?");
        for (z=0; z<3; z++)
        {
            printf("Niveau %d\n",z+1);
            for (x=0; x<3; x++)
            {
                for(y=0; y<3; y++)
                    printf("%d\t", tictactoe[x][y][z]);
                putchar('\n');
            }
        }
        return(0);
}