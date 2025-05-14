#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    
    float données [5] = {140450.06,14458.62,14539.14,14514.11,14452.06};
    float tabBourseFin [5];
    for(int copy=0; copy<=4; copy++)
    {
    tabBourseFin[copy] = données[copy];
    }
    for (int boucle =0 ; boucle <=4; boucle++)
    {
        printf("Jour %d: %f\n",boucle+1,tabBourseFin[boucle]);
    }
    return(0);
}
/*
Observation : Ce code a des vals pré-enregistrées du tableau de données et le transfère dans le tableau tabBourseFin vide. puis fait un affichage des valeurs de ce dernier.
affichage avec position de la boucle et de sa valeur contenue. 
*/