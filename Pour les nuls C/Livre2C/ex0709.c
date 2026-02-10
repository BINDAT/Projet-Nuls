#include <stdio.h> // en-tête de la bibliothèque standard d'entrée/sortie

int main()
{
    int ch; // déclaration de trois variables de type caractère
    ch = 'W'; // affectation de la valeur 'W' à la variable 
    putchar(ch); // affichage du caractère W

    ch = 'o'; // affectation de la valeur 'o' à la variable 
    putchar(ch); // affichage du caractère o

    ch = 'w'; // affection de la valeur 'w' à la variable 
    putchar(ch); // affichage du caractère w

    ch = '\n'; // affectation du caractère de saut de ligne à la variable
    putchar(ch); // affichage du caractère '\n' pour passer à la ligne suivante

    return(0); // indique que le programme s'est terminé avec succès
}