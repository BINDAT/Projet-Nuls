#include <stdio.h> //Pour printf et scanf pour l'affichage et la saisie

int main()
{
    struct joueur // déclaration d'une structure joueur
    {
        char nomj[32]; // déclaration d'un tableau de caractères pour le nom du joueur
        int scoremax; // déclaration d'un entier pour le meilleur score du joueur
    };
    struct joueur xbox; // déclaration d'une variable de type struct joueur

    printf("Nom du joueur : ");
    scanf("%s", xbox.nomj); // saisie du nom du joueur grâce à la structure
    printf("Meilleur score : ");
    scanf("%d", &xbox.scoremax); // saisie du meilleur score du joueur grâce à la structure

    printf("Meilleur score de %s : %d\n", xbox.nomj, xbox.scoremax); // affichage du meilleur score du joueur grâce à la structure
    return(0);
}