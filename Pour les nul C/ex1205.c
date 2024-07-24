#include <stdio.h>

int main()
{
    int scoremax[10]; //var avec limites d'élément tableau
    int x;

    for (x=0; x<=9; x++) //boucle d'entrée
    {
        printf("Votre score #%d : ",x+1);
        scanf("%d",&scoremax[x]);
    }
    puts("Voici vos meilleurs scores");
    for (x= 0; x<=9; x++) //boucle de sortie
    {
        printf("#%d %d\n",x+1,scoremax[x]);
    }
    return(0);
}