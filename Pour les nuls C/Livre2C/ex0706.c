#include <stdio.h> // en-tête de la bibliothèque standard d'entrée/sortie

int main()
{
    int ch; // déclaration d'une variable de type entier pour stocker un caractère

    printf("Frappez Entrée :"); // affichage d'un message à l'écran pour inviter l'utilisateur à appuyer sur la touche Entrée
    getchar(); // lecture d'un caractère au clavier (dans ce cas, la touche Entrée) et l'ignorer
    ch = 'H'; // affectation du caractère 'H' à la variable ch
    putchar(ch); // affichage du caractère stocké dans la variable ch à l'écran
    ch = 'i'; // affectation du caractère 'i' à la variable ch
    putchar(ch); // affichage du caractère stocké dans la variable ch à l'écran
    putchar('!'); // affichage du caractère '!' à l'écran
    putchar('\n'); // affichage d'un saut de ligne
    return(0); // retour de la valeur 0 pour indiquer que le programme s'est terminé avec succès
}