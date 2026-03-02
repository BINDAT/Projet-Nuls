#include <stdio.h> // inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    int cmptr;

    for (cmptr = -5; cmptr < 6; cmptr = cmptr+1) // boucle qui s'exécute de -5 à 5
    {
        printf("%d\n", cmptr); // affichage de la valeur de cmptr à chaque itération
    }
    
    return(0); // fin du programme
}