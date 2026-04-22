#include <stdio.h> // Entête pour les fonctions d'entrée/sortie

int main()
{
    float tabBourseFin[5]; // Déclaration d'un tableau de 5 éléments pour stocker les valeurs de la bourse
    int jours; // Déclaration d'une variable entière pour les boucles

    tabBourseFin[0] = 14450.06;
    tabBourseFin[1] = 14458.62;
    tabBourseFin[2] = 14539.14;
    tabBourseFin[3] = 14514.11;
    tabBourseFin[4] = 14452.06;

    puts("Fermeture bourse");
    for (jours=0; jours<5; jours++) // Boucle pour lire les valeur du tableau
    {
        printf("Jours %d : %f\n", jours+1, tabBourseFin[jours]);
    }
    
    return 0; // Retourne 0 pour indiquer que le programme s'est terminé avec succès
}