#include <stdio.h> // pour printf() et puts()

#define TAILLE 19 // taille du tableau

int main()
{
    char tabulles[TAILLE] = "Vive le langage C"; // tableau à trier
    int interne, externe, temp, boucle; // variables de boucle et de travail

    /* Affiche le tableau initial */
    puts("Tableau de départ :");
    for(boucle=0; boucle<TAILLE; boucle++) // boucle pour afficher les éléments du tableau
    {
        printf("%c", tabulles[boucle]); // affiche chaque élément suivi d'une tabulation
    }
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
    for(boucle=0; boucle<TAILLE; boucle++)
        printf("%c", tabulles[boucle]);
    putchar('\n');
    return(0);
}