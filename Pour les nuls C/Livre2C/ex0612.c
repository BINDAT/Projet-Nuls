#include <stdio.h> // en-tête de la bibliothèque standard d'entrée/sortie

int main()
{
    int a, b, c; // déclaration de trois variables entières

    a = 5; // affectation de la valeur 5 à la variable a
    b = 7 ; // affectation de la valeur 7 à la variable b
    c = a + b; // calcul de la somme de a et b, et affectation du résultat à la variable c
    printf("Variable c=%d\n", c); // affichage de la valeur de c à l'écran
    return(0); // retour de la valeur 0 pour indiquer que le programme s'est terminé avec succès
}