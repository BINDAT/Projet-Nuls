#include <stdio.h>

#define TAILLE 6

int main()
{
    int tabulles[] = {95,60,6,87,50,24};
    int interne,externe,temp,x;

    /* Affiche le tableau initial */
    puts("Tableau de depart :");
    for (x=0; x<TAILLE; x++)
        printf("%d\t", tabulles[x]);
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

/*
Observation : ce code contient un tableau de 6 valeur qui est d'abord afficher en désordre puis ensuite afficher en ordre.
la constante en #define TAILLE sert à déterminer la taille la sur 6 élément pour le tableau mais aussi les boucles avec la var x.
Les Var interne et externe servent à la manipulation des val du tableau et sont mises dans des boucles prévues à cet effet avec un if.
*/