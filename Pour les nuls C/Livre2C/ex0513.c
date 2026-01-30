#include <stdio.h> // Inclusion du fichier d'en-tête standard pour les entrées/sorties

#define VALEUR 3 // Définition d'une constante nommée VALEUR avec la valeur 3

int main()
{
    printf("La valeur est %d\n", VALEUR); // Affichage de la valeur de VALEUR
    printf("et %d est bien la valeur.\n", VALEUR); // Affichage de la valeur de VALEUR
    printf("Ce n'est pas %d,\n", VALEUR+1); // Affichage de la somme de VALEUR et 1 en plus
    printf("ni %d non plus.", VALEUR-1); // Affichage de la différence entre VALEUR et 1 en moins
    printf("Non, la valeur rest %d.\n", VALEUR); // Affichage de la valeur de VALEUR
    return(0);
}