#include <stdio.h> // pour printf et scanf
#include <stdlib.h> // pour rand et srand
#include <time.h> // pour time

int main()
{
    int r, a, b; // r pour le nombre aléatoire, a et b pour les boucles

    srand((unsigned)time(NULL)); // initialisation de la graine pour les nombres aléatoires
    for (a=0; a<20; a++) // boucle pour générer 20 lignes
    {
        for (b=0; b<5; b++) // boucle pour générer 5 nombres par ligne
        {
            r=rand(); // génération d'un nombre aléatoire
            printf("%d\t", r); // affichage du nombre aléatoire suivi d'une tabulation pour l'alignement
        }
        putchar('\n'); // saut de ligne après chaque ligne de 5 nombres aléatoires
    }
    return(0); // fin du programme
}