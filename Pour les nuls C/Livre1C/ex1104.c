#include <stdio.h>

int main()
{
    int compteur; //var compteur
    compteur = 0; //val compteur
     
    while (compteur >-10) //while compteur avec restriction -10
    {
            compteur--; //decrementation de compteur pour val neutre.
    }
    while (compteur <=10) //while avec restiction <=10
    {
        printf("%d ",compteur); //affiche le compteur de toutes les whiles.
        compteur++; //incrementation de compteur
    }
    putchar('\n');
    return(0);   
}