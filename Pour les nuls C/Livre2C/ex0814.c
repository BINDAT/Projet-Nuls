#include <stdio.h> // pour les fonctions d'entrée/sortie

int main()
{
    int coordonnee; // déclaration d'une variable de type entier pour stocker la coordonnée

    printf("Coordonnée de la cible : ");
    scanf("%d", &coordonnee); // lecture de la valeur de 'coordonnee' à partir de l'entrée standard et stockage dans la variable 'coordonnee'
    
    if( coordonnee >= -5 && coordonnee <= 5) // condition pour vérifier si la coordonnée est comprise entre -5 et 5
    {
        puts("Assez proche !");
    }
    else // condition pour vérifier si la coordonnée est en dehors de l'intervalle [-5, 5]
    {
        puts("La cible est encore loin !");
    }
    return(0); // fin du programme
}