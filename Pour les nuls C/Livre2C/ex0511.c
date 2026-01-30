#include <stdio.h> // Inclusion du fichier d'en-tête standard pour les entrées/sorties

int main()
{
    printf("La valeur est %d\n", 3); // Affichage de la valeur 3
    printf("et %d est bien la valeur.\n", 3); // Affichage de la valeur 3
    printf("Ce n'est pas %d,\n", 3+1);  // Affichage de la somme de 3 et 1 en plus
    printf("ni %d non plus.", 3-1); // Affichage de la différence entre 3 et 1 en moins
    printf("Non, la valeur rest %d.\n", 3); // Affichage de la valeur 3
    return(0); // Indication que le programme s'est terminé avec succès
}