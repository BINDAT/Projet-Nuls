#include <stdio.h> // Pour le fonctionnement de printf et putchar, qui sont utilisés pour afficher du texte à l'écran et pour insérer des caractères, respectivement.

int main()
{
    int cmptr; // Déclare une variable entière nommée cmptr

    cmptr = 0; // Initialise cmptr à 0
    while (1) // Démarre une boucle infinie
    {
        printf("%d ", cmptr); // Affiche la valeur actuelle de cmptr suivie d'un espace
        cmptr = cmptr+1; // Incrémente cmptr de 1
        if( cmptr > 50)
            break; // Si cmptr est supérieur à 50, sort de la boucle
    }
    putchar('\n'); // Affiche un saut de ligne après la boucle
    return(0); // Indique que le programme s'est terminé avec succès
}