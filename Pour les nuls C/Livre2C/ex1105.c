#include <stdio.h> // pour les fonctions d'entrée/sortie

int main() // fonction principale du programme
{
    int a,b; // déclaration de deux variables entières a et b

    b=16; // affectation de la valeur 16 à la variable b
    printf("Avant, a ne change pas encore et b = %d\n", b); // affichage de la valeur de b avant l'opération d'incrémentation
    a=b++; // affectation de la valeur de b à a, puis incrémentation de b de 1 (post-incrémentation)
    printf("Après, a = %d et b = %d\n", a, b); // affichage des valeurs de a et b après l'opération d'incrémentation
    return(0); // fin de la fonction principale, retour de la valeur 0 pour indiquer que le programme s'est terminé avec succès
}