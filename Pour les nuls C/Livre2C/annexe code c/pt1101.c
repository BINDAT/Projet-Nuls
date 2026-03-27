#include <stdio.h> // Permet un affiche de puts

int main()
{
    for(int boucle = 0; boucle <= 10; boucle++, puts("Ne marchez pa sur ma pelouse!")); // En paramètre des instructions sont entrées autre que celle de boucle.
    return 0; //retourne 0 à l'affichage à la fin du programme.
}

/*
Observation : Ce code tourne 10 fois par l'effet de la boucle pour afficher 10 fois un message. Ont peut remarquer que la variable et sa valeur
sont initialisées directement dans la boucle for.
*/