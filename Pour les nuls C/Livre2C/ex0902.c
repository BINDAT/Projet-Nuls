#include <stdio.h> // inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    int x;

    for (x = 0; x < 20; x=x+1) // boucle qui s'exécute 20 fois
    {
        puts("Ne vous l'ais-je pas encore dit ?"); // affichage de la phrase à chaque itération
    }
    return(0); // fin du programme
}