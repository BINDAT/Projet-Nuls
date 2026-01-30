#include <stdio.h> // Inclusion du fichier d'en-tête standard pour les entrées/sorties

#define VALEUR1 3  // Définition d'une constante nommée VALEUR1 avec la valeur 3
#define VALEUR2 1 // Définition d'une constante nommée VALEUR2 avec la valeur 1

int main()
{
    printf("La valeur est %d\n", VALEUR1); // Affichage de la valeur de VALEUR1
    printf("et %d est bien la valeur.\n", VALEUR1); // Affichage de la valeur de VALEUR1
    printf("Ce n'est pas %d,\n", VALEUR1+VALEUR2); // Affichage de la somme de VALEUR1 et VALEUR2
    printf("ni %d non plus.", VALEUR1-VALEUR2); // Affichage de la différence entre VALEUR1 et VALEUR2
    printf("Non, la valeur rest %d.\n", VALEUR1); // Affichage de la valeur de VALEUR1
    return(0); // Indication que le programme s'est terminé avec succès
}