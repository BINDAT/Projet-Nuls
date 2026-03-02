#include <stdio.h> // inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    int cmptr;

    for (cmptr = 11; cmptr <= 19; cmptr = cmptr+1) // boucle qui s'exécute de -5 à 5
    {
        printf("%d\t", cmptr); // affichage de la valeur de cmptr à chaque itération
    }
    
    putchar('\n'); // saut de ligne après chaque affichage
    return(0); // fin du programme
}