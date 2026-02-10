#include <stdio.h> // en-tête de la bibliothèque standard d'entrée/sortie

int main()
{
    char a, b, c, d; // déclaration de trois variables de type caractère

    a = 'W'; // affectation de la valeur 'W' à la variable a
    b = 'o'; // affectation de la valeur 'o' à la variable b
    c = 'w'; // affection de la valeur 'w' à la variable c
    d = '\n'; // affectation du caractère de saut de ligne à la variable d
    printf("%c%c%c%c", a, b, c, d); // affichage des caractères a, b, c et d
    return(0); // indique que le programme s'est terminé avec succès
}