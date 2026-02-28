#include <stdio.h> // inclusion de la bibliothèque standard d'entrée/sortie

int main() // fonction principale
{
    int a, b, leplusgrand; // déclaration des variables
    
    printf("Indiquez une valeur A: ");
    scanf("%d", &a); // lecture de la première valeur
    printf("Indiquez une autre valeur B: ");
    scanf("%d", &b); // lecture de la deuxième valeur

    leplusgrand = (a > b) ? a : b; // opérateur ternaire pour trouver le plus grand
    printf("La valeur %d est plus grande.\n", leplusgrand);
    return(0); // fin du programme
}