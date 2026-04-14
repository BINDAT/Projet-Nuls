#include <stdio.h> //Pour printf et puts
#include <stdlib.h> //Pour rand et srand

int main()
{
    int r, a, b; //r pour le nombre aléatoire, a et b pour les boucles

        puts("100 chiffres au hasard");
        for (a=0; a<20; a++) //20 lignes
        {
            for (b=0; b<5; b++) //5 chiffres par ligne
            {
                r=(r % 20) +1; //r prend une valeur entre 1 et 20
                printf("%d\t", r); //Affiche r suivi d'une tabulation pour espacer les chiffres
            }
            putchar('\n'); //Affiche un saut de ligne après chaque ligne de 5 chiffres
        }
        return(0);
}