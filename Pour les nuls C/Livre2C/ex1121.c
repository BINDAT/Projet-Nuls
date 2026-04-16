#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie
#include <stdlib.h> // Inclusion de la bibliothèque standard pour les fonctions utilitaires
#include <time.h> // Inclusion de la bibliothèque pour les fonctions de manipulation du temps


int main()
{
    int devinessai, secret; // Déclaration d'une variable entière pour stocker la tentative de devinette de l'utilisateur
    srand((unsigned)time(NULL)); // Initialisation de la graine pour les nombres aléatoires en utilisant le temps actuel
    secret = rand() %100 +1; // Génération d'un nombre aléatoire entre 1 et 100 et stockage dans la variable secret

    printf("Tentez de de deviner le chiffre secret : ");
    scanf("%d", &devinessai); // Lecture de l'entrée de l'utilisateur et stockage de la valeur dans la variable devinessai
    if (devinessai == secret) // Vérification si la tentative de devinette est égale au chiffre secret
    {
        printf("Bravo ! C'est bien %d", secret);
        return(0);
    }
    if (devinessai != secret) // Vérification si la tentative de devinette n'est pas égale au chiffre secret
    {
        printf("Non, ce n'est pas cela ! C'était %d et vous avez saisi %d", secret, devinessai); // Affichage du message indiquant que la tentative de devinette est incorrecte et révélation du chiffre secret
        return(1);
    }
}