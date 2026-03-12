#include <stdio.h> // Pour le fonctionnement de printf et putchar, qui sont utilisés pour afficher du texte à l'écran et pour insérer des caractères, respectivement.

int main()
{
    int cmptr; // Déclare une variable entière nommée cmptr

    for(cmptr=0; cmptr <= cmptr; cmptr++) // Initialise cmptr à 0, puis continue la boucle tant que cmptr est inférieur à lui-même (ce qui est une condition toujours fausse), et incrémente cmptr de 1 à chaque itération
    {
        printf("%d ", cmptr); // Affiche la valeur actuelle de cmptr suivie d'un espace
        if( cmptr >= 50)
            break; // Si cmptr est supérieur à 50, sort de la boucle
    }
    putchar('\n'); // Affiche un saut de ligne après la boucle
    return(0); // Indique que le programme s'est terminé avec succès
}