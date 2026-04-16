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
    
    if (devinessai != secret) // Vérification si la tentative de devinette de l'utilisateur est différente du nombre secret
    {
        printf("Ce n'est pas correct.\n");
        printf("Réponse de l'ordinateur %d\n", secret);
        printf("Votre réponse %d\n", devinessai);
        return devinessai != secret; // retourne 0 car la condition est fausse, indiquant que l'utilisateur a perdu
    }
    else
    {
        printf("Oui c'est correct c'est bien %d\n", secret);
        return devinessai == secret; // retourne 1 car la condition est vraie, indiquant que l'utilisateur a gagné
    }
        
}