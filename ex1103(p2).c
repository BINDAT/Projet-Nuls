#include <stdio.h>

int main()
{
    int compteur; //var compteur.

    for(compteur =-5; compteur <5; compteur++) //boucle for pour le comptage.
        printf("%d ", compteur);
    
    for(; compteur >=5; compteur--)// boucle for avec instruction ; vide pour la continuiter avec la premiere boicle for. boucle for pour le décomptage.
        printf("%d ",compteur);
    
        putchar('\n');
    return(0);
}