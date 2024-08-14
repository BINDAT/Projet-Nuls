#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define TAILLE 19

int main()
{
    
    char tabulles[TAILLE];
    char interne,externe,temp,x;
    
    srand((unsigned)time(NULL));
    
    for(x=0; x<TAILLE; x++)
    {    
        tabulles[x] = rand()%401;
    }
    
    /* Affiche le tableau initial */
    puts("Tableau de depart :");
    for (x=0; x<TAILLE; x++){
        printf("%c ", tabulles[x]);}
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
        printf("%c ",tabulles[x]);
     //putchar('æ\nÆ');
     putchar('\n');
     return(0);
}

/*
Observation : Ce code contient un tableau de 19 valeur qui est d'abord afficher en désordre puis ensuite afficher en ordre des caractères aléatoire.
La constante en #define TAILLE sert à déterminer la taille la sur 19 élément pour le tableau mais aussi les boucles avec la var x et le rand()%401 sert dans cet exemple a déterminer des val aléatoire.
Les Var interne et externe servent à la manipulation des val du tableau et sont mises dans des boucles prévues à cet effet avec un if.
*/