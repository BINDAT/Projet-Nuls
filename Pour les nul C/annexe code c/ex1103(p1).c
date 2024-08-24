#include <stdio.h>

int main()
{
    int compteur; //var compteur
    compteur = 0; //val compteur
     
    while (compteur > -5) //while compteur avec restriction -5
    {
            compteur--; //decrementation de compteur pour val neutre.
    }
    while (compteur <=5) //while avec restiction <=5
    {
        printf("%d ",compteur); //affiche le compteur de toutes les whiles.
        compteur++; //incrementation de compteur
    }
    putchar('\n');
    return(0);   
}