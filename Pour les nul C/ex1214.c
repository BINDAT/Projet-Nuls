#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define TAILLE 40

int main()
{
    
    int tabulles[TAILLE];
    int interne,externe,temp,x;
    srand((unsigned)time(NULL));
    for(x=0; x<TAILLE; x++)
    {    
        tabulles[x] = rand()%101;
    }
    
    /* Affiche le tableau initial */
    puts("Tableau de depart :");
    for (x=0; x<TAILLE; x++){
        printf("%d\t", tabulles[x]);}
    //putchar('æ\nÆ');
}
/*
Observation : ce code contient un tableau de 40 valeur qui est d'abord afficher en désordre puis ensuite afficher en ordre.
la constante en #define TAILLE sert à déterminer la taille la sur 40 élément pour le tableau mais aussi les boucles avec la var x.
*/