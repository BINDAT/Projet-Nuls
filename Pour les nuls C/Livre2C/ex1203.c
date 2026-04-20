#include <stdio.h> // Entête pour les fonctions d'entrée/sortie

int main() // Fonction principale du programme
{
    int scoremax[4]; // Déclaration d'un tableau de 4 entiers pour stocker les scores

    printf("Votre meilleur score: ");
    scanf("%d",&scoremax[0]); // Lecture du premier score et stockage dans la variable scoremax[0]
    printf("Second meilleur score: ");
    scanf("%d",&scoremax[1]); // Lecture du second score et stockage dans la variable scoremax[1]
    printf("Troisième meilleur score: ");
    scanf("%d",&scoremax[2]); // Lecture du troisième score et stockage dans la variable scoremax[2]
    printf("Quatrième meilleur score: ");
    scanf("%d",&scoremax[3]); // Lecture du quatrième score et stockage dans la variable scoremax[3]

    puts("Voici vos meilleurs scores"); // Affichage d'un message pour introduire les scores
    printf("#1 %d\n",scoremax[0]); // Affichage du premier score avec un format spécifique
    printf("#2 %d\n",scoremax[1]); // Affichage du second score avec un format spécifique
    printf("#3 %d\n",scoremax[2]); // Affichage du troisième score avec un format spécifique
    printf("#4 %d\n",scoremax[3]); // Affichage du quatrième score avec un format spécifique

    return(0); // Retourne 0 pour indiquer que le programme s'est terminé avec succès
}