#include <stdio.h>

#define TAILLE 40

int main()
{
    
    int tabulles[40] = {};
    int interne,externe,temp,x,aleatoire;
    srand((unsigned)time(NULL));
    for(aleatoire; aleatoire <40; aleatoire++)
    {    
        aleatoire = rand()%101;
    
    }
    tabulles[40] = &aleatoire;
    
    
    /* Affiche le tableau initial */
    puts("Tableau de depart :");
    for (x=0; x<TAILLE; x++){
        printf("%d\t", tabulles[x]);}
    //putchar('æ\nÆ');
}