#include <stdio.h> //bibliothèque pour gerer l'affichage

int main() // fonction principale
{
    int boucle = -5; // déclaration de la variable et sa valeur

    while(boucle < 5) // une boucle qui utilise la variable
    {
        printf("%d\t",boucle);
        boucle++; // incrémentation de la boucle
    }
    while (boucle >= -5)
    {
        printf("%d\t",boucle);
        boucle--;
    }
    
    return 0;
}