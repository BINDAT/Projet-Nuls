#include <stdio.h> // pour printf et putchar
#include <stdbool.h>

bool verifier(int valeur);

void limiter(int stop); // prototype de la fonction limiter

int main()
{
    int s; // déclaration de la variable s de type int

    printf("Indiquez une valeur pour stopper (0-100) : "); // affichage d'un message pour demander à l'utilisateur de saisir une valeur pour stopper
    scanf("%d", &s); // lecture de la valeur saisie par l'utilisateur et stockage dans la variable s
    if (verifier(s))
    {
        limiter(s); // appel de la fonction limiter avec s comme argument
    }
    else if(s<0)
    {
        puts("nombre négatif non pris en charge");
    }
    else if(s>100)
    {
        puts("Ne dois pas aller au dessus de la limite");
    }
    return(0);
}

void limiter(int stop)
{
    int x; // déclaration de la variable x de type int
    for (x=0; x<=100; x=x+1)
    {
        printf("%d ", x); // affichage de la valeur de x suivie d'un espace
        if (x == stop)
        {
            puts("Vous gagnez !\n"); // affichage d'un message indiquant que l'utilisateur a gagné si x est égal à stop
            return;
        }
        else if()
        {
            puts("Je gagne!");
        }
        else
        {
            puts("Personne ne gagne");
        }
    }
}

bool verifier(int valeur)
{
    return(valeur >= 0 & valeur <= 100);
}