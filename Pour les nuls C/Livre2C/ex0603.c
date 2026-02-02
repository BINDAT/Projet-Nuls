#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    char c; // Déclaration d'une variable de type caractère
    int i; // Déclaration d'une variable de type entier
    float f; // Déclaration d'une variable de type flottant
    double d; // Déclaration d'une variable de type double précision

    c = 'a'; // Initialisation de la variable caractère
    i = 1; // Initialisation de la variable entière
    f = 19.0; // Initialisation de la variable flottante
    d = 20000.009; // Initialisation de la variable double précision

    printf("%c\n%d\n%f\n%f\n", c, i, f, d); // Affichage des valeurs des variables
    return(0); // Fin du programme avec un code de retour 0
}