#include <stdio.h> // Entête pour les fonctions d'entrée/sortie

int main()
{
    int scoremax[4]; // Déclaration d'un tableau de 4 entiers pour stocker les scores
    int x; // Déclaration d'une variable entière pour les boucles

    for (x=0; x<4; x++) // Boucle pour lire les scores
    {
        printf("Votre score #%d : ", x+1); // Affichage d'un message pour demander le score
        scanf("%d", &scoremax[x]); // Lecture du score et stockage dans le tableau
    }
    
    puts("Voici vos meilleurs scores"); // Affichage d'un message pour introduire les scores
    for (x=0; x<4; x++) // Boucle pour afficher les scores
        printf("#%d %d\n", x+1, scoremax[x]); // Affichage du score avec un format spécifique
    
    return 0; // Retourne 0 pour indiquer que le programme s'est terminé avec succès
}