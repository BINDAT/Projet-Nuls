#include <stdio.h>

int main ()
{
 char tictatoe[3][3];
 int x = 0,y = 0;
 
 /* Initialise la matrice */
 x = 0; //Ici initialise x pour chaque affichage
 while(x<3)
   { 
    y = 0; //Ici initialise y pour chaque affichage
    while(y<3)
    { 
        tictatoe[x][y]= '.';
        y++;    
    }
    x++;
}
tictatoe[1][1] = 'X';
/* Affiche le plateau */
    puts("Une partie de  Tic-Tac-Toe ?");
    x=0;
    while(x<3)
    {
        y=0;
        while (y<3)
        {
            printf("%c\t",tictatoe[x][y]);
            y++;
        }  
        putchar('\n');
        x++;
    }

    return(0);
}