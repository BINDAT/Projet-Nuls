#include <stdio.h> // Entête pour les fonctions d'entrée/sortie

int main() // Fonction principale du programme
{
    int scoremax1, scoremax2,scoremax3, scoremax4; // Déclaration de trois variables entières pour stocker les scores

    printf("Votre meilleur score: ");
    scanf("%d",&scoremax1); // Lecture du premier score et stockage dans la variable scoremax1
    printf("Second meilleur score: ");
    scanf("%d",&scoremax2); // Lecture du second score et stockage dans la variable scoremax2
    printf("Troisième meilleur score: ");
    scanf("%d",&scoremax3); // Lecture du troisième score et stockage dans la variable scoremax3
    printf("Quatrième meilleur score: ");
    scanf("%d",&scoremax4); // Lecture du quatrième score et stockage dans la variable scoremax4

    puts("Voici vos meilleurs scores"); // Affichage d'un message pour introduire les scores
    printf("#1 %d\n",scoremax1); // Affichage du premier score avec un format spécifique
    printf("#2 %d\n",scoremax2); // Affichage du second score avec un format spécifique
    printf("#3 %d\n",scoremax3); // Affichage du troisième score avec un format spécifique
    printf("#4 %d\n",scoremax4); // Affichage du quatrième score avec un format spécifique

    return(0); // Retourne 0 pour indiquer que le programme s'est terminé avec succès
}