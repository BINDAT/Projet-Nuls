#include <stdio.h>

int main()
{
    char tictatoe [3][3][3];
    int x,y,z;

/* Initialise la matrice*/

    for(x=0; x<3; x++)
        for(y=0; y<3; y++)
            for(z=0; z<3; z++)
                tictatoe [x][y][z]='.';
tictatoe[1][1][1] ='X';
/* Affiche le plateau de jeu */
    puts("Une petite partie de Tic-Tac-Toe 3D ?");
    for(z=0; z<3; z++)
    {
        printf("Niveau %d\n",z+1);
        for(x=0; x<3; x++)
        {
            for(y=0; y<3; y++);
                printf("%c\t", tictatoe[x][y][z]);
            putchar('\n');
        }
    }
    return(0);
}