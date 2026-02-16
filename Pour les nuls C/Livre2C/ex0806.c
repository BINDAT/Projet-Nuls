#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie

#define SECRET 17 // Définition d'une constante nommée SECRET avec la valeur 17

int main()
{
    int devinessai; // Déclaration d'une variable entière pour stocker la tentative de devinette de l'utilisateur

    printf("Tentez de de deviner le chiffre secret : ");
    scanf("%d", &devinessai); // Lecture de l'entrée de l'utilisateur et stockage de la valeur dans la variable devinessai
    if (devinessai == SECRET) // Vérification si la tentative de devinette est égale au chiffre secret
    {
        puts("Bravo !");
        return(0);
    }
    if (devinessai != SECRET) // Vérification si la tentative de devinette n'est pas égale au chiffre secret
    {
        puts("Non, ce n'est pas cela !");
        return(1);
    }
}