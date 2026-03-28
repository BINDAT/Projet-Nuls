#include <stdio.h> //bibliothèque pour gerer l'affichage

int main() // fonction principale
{
    int boucle; // déclaration de la variable et sa valeur

    for(boucle = -5; boucle < 5; boucle++) // une boucle qui utilise la variable
    {
        printf("%d\t",boucle);
    }
    for(; boucle >= -5; boucle--)
    {
        printf("%d\t",boucle);
    }
    
    return 0;
}