#include <stdio.h> // en-tête de la bibliothèque standard d'entrée/sortie

#define caractère 'W'

int main()
{
    char a, b, c, d; // déclaration de trois variables de type caractère

    a = 'W'; // affectation de la valeur 'W' à la variable a
    b = caractère + 24; // affectation de la valeur de a plus 24 à la variable b avec la constante caractère
    c = caractère + 32; // affection de la valeur de a plus 32 à la variable c avec la constante caractère
    d = '\n'; // affectation du caractère de saut de ligne à la variable d
    printf("%c%c%c%c", a, b, c, d); // affichage des caractères a, b, c et d
    return(0); // indique que le programme s'est terminé avec succès
}