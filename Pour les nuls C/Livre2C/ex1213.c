#include <stdio.h> // pour printf() et puts()

#define TAILLE 6 // taille du tableau

int main()
{
    int tabulles[] = { 95, 60, 6, 87, 50, 24 }; // tableau à trier
    int interne, externe, temp, x; // variables de boucle et de travail

    /* Affiche le tableau initial */
    puts("Tableau de départ :");
    for(x=0; x<TAILLE; x++) // boucle pour afficher les éléments du tableau
        printf("%d\t", tabulles[x]); // affiche chaque élément suivi d'une tabulation
    putchar('\n'); // affiche un saut de ligne après le tableau initial

    /* tabulles sort*/
    for (externe=0; externe<TAILLE-1; externe++) // boucle pour parcourir le tableau jusqu'à l'avant-dernier élément
    {
        for (interne=externe+1; interne<TAILLE; interne++) // boucle pour parcourir les éléments suivants du tableau
        {
            if (tabulles[externe] > tabulles[interne]) // compare les éléments pour déterminer s'ils sont dans le mauvais ordre
            {
                temp=tabulles[externe]; // stocke temporairement l'élément externe
                tabulles[externe] = tabulles[interne]; // place l'élément interne à la position de l'élément externe
                tabulles[interne] = temp; // place l'élément temporaire (ancien élément externe) à la position de l'élément interne
            }
        }
    }

/* Affiche le tableau après tri */
    puts("Tableau après tri :");
    for(x=0; x<TAILLE; x++)
        printf("%d\t", tabulles[x]);
    putchar('\n');
    return(0);
}