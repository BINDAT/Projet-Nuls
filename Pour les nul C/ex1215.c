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
    putchar('\n');


  /* tabulles sort */
    for(externe=0; externe<TAILLE-1; externe++)
    {
        for(interne=externe+1; interne<TAILLE; interne++)
            if(tabulles[externe] > tabulles[interne])
            {
                temp=tabulles[externe];
                tabulles[externe] = tabulles[interne];
                tabulles[interne] = temp;
            }
    }
/* Affiche le tableau apres tri */
    puts("Tableau apres tri :");
    for(x=0; x<TAILLE; x++)
        printf("%d\t",tabulles[x]);
     //putchar('æ\nÆ');
     putchar('\n');
     return(0);
}