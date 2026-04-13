#include <stdio.h> // pour printf et scanf
#include <stdlib.h> // pour rand et srand

int main()
{
    unsigned graine; // la graine doit être un entier non signé
    int r, a, b; // r pour stocker le nombre aléatoire, a et b pour les boucles

    printf("Indiquez une valeur int pou la graine : ");
    scanf("%u", &graine); // lire la graine de l'utilisateur
    srand(graine); // initialiser le générateur de nombres aléatoires avec la graine
    for (a=0; a<20; a++) // boucle pour générer 20 lignes
    {
        for (b=0; b<5; b++) // boucle pour générer 5 nombres par ligne
        {
            r=rand(); // générer un nombre aléatoire
            printf("%d\t", r); // afficher le nombre suivi d'une tabulation pour l'alignement
        }
        putchar('\n'); // après chaque ligne de 5 nombres, passer à la ligne suivante
    }
    return(0); // terminer le programme
}