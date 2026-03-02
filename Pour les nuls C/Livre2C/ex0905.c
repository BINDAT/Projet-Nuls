#include <stdio.h> // inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    int duo;
    for (duo = 2; duo <= 100; duo += 2) // boucle qui s'exécute de 2 à 100, en incrémentant de 2 à chaque itération
    {
        printf("%d\t", duo); // affichage de la valeur de duo à chaque itération, suivi d'un saut de ligne
    }
    putchar('\n'); // saut de ligne après chaque affichage
    return(0); // fin du programme
}