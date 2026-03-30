#include <stdio.h> //bibliothèque pour gerer l'affichage

int main() // fonction principale
{
    int c = -10; // déclaration de la variable et sa valeur

    while(c < 10) // une boucle qui utilise la variable
        printf("%d",c);
        c++; // incrémentation de la boucle
    while (c >= -10)
        printf("%d",c);
        c--;
    putchar('\n'); // saut de ligne
    return 0;
}