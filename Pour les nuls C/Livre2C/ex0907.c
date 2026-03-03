#include <stdio.h> // inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    int compteur;
    for (compteur = 25; compteur >= 0; compteur -= 1) // boucle qui s'exécute de 25 à 0, en décrémentant de 1 à chaque itération
    {
        printf("%d\t", compteur); // affichage de la valeur de compteur à chaque itération, suivi d'un saut de ligne
    }
    putchar('\n'); // saut de ligne après chaque affichage
    return(0); // fin du programme
}