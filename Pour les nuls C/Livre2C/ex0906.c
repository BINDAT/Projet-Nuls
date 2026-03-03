#include <stdio.h> // inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    int trio;
    for (trio = 3; trio <= 100; trio += 3) // boucle qui s'exécute de 3 à 100, en incrémentant de 3 à chaque itération
    {
        printf("%d\t", trio); // affichage de la valeur de trio à chaque itération, suivi d'un saut de ligne
    }
    putchar('\n'); // saut de ligne après chaque affichage
    return(0); // fin du programme
}