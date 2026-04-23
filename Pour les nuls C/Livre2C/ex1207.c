#include <stdio.h> // Entête pour les fonctions d'entrée/sortie

int main()
{
    int tabBourseDebut[] = {10, 12, 14, 16, 18, 20}; // Déclaration d'un tableau de 5 éléments pour stocker les valeurs de la bourse
    int copie; // Déclaration d'une variable entière pour les boucles
    int taBourseFin[] = {};

    for (copie = 0; copie<=tabBourseDebut[copie]; copie++) // Boucle pour copier les valeurs du tableau de début dans le tableau de fin
    {
        tabBourseDebut[copie] = taBourseFin[copie]; // Copie de la valeur du tableau de début dans le tableau de fin
    }
    for (int affichage = 0; affichage <= 5; affichage++) // Boucle pour afficher les valeurs du tableau de fin
    {
        printf("%d: %d\n", affichage +1, taBourseFin[affichage]); // Affiche l'index +1 et la valeur correspondante du tableau de fin
    }
    return 0; // Retourne 0 pour indiquer que le programme s'est terminé avec succès
}