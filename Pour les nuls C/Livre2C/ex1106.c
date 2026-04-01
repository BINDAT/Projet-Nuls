#include <stdio.h> // pour les fonctions d'entrée/sortie

int main()
{
    int a,b; // déclaration de deux variables entières

    b=16; // affectation de la valeur 16 à la variable b
    printf("Avant, a ne change pas encore et b = %d\n", b);
    a= ++b; // pré-incrémentation : b est d'abord incrémenté, puis sa valeur est affectée à a
    printf("Après, a = %d et b = %d\n", a, b); // affichage des valeurs de a et b après l'opération
    return(0); // fin du programme, retourne 0 pour indiquer que tout s'est bien passé
}