#include <stdio.h> // pour printf et putchar
#include <stdlib.h>
#include <stdbool.h>
#include <time.h> // Pour utiliser time()


bool verifier(int valeur);

void limiter(int nombre_du_joueur, int nombre_du_robot, int nombre_du_code); // prototype de la fonction limiter

int main()
{
    int nombre_du_joueur; // déclaration de la variable s de type int
    srand(time(NULL));
    int nombre_du_robot = rand() %101;
    printf("Indiquez une valeur pour stopper (0-100) : "); // affichage d'un message pour demander à l'utilisateur de saisir une valeur pour stopper
    scanf("%d", &nombre_du_joueur); // lecture de la valeur saisie par l'utilisateur et stockage dans la variable s
    if (verifier(nombre_du_joueur))
    {
        limiter(nombre_du_joueur, nombre_du_robot); // appel de la fonction limiter avec s comme argument
    }
    else if(nombre_du_joueur<0)
    {
        puts("nombre négatif non pris en charge");
    }
    else if(nombre_du_joueur>100)
    {
        puts("Ne dois pas aller au dessus de la limite");
    }
    else
    {
        puts("Quelque chose ne vas pas");
    }
    return(0);
}

void limiter(int nombre_du_joueur, int nombre_du_robot, int nombre_du_code)
{
        if (nombre_du_joueur == nombre_du_robot)
        {
            printf("\nVous gagnez ! %d %d\n", nombre_du_joueur, nombre_du_robot); // affichage d'un message indiquant que l'utilisateur a gagné si x est égal à stop
            return;
        }
        else if(nombre_du_joueur != nombre_du_robot)
        {
            printf("\nJe gagne! %d %d\n",nombre_du_joueur, nombre_du_robot);
            return;
        }
        else
        {
            printf("\nPersonne ne gagne %d %d\n", nombre_du_joueur, nombre_du_robot);
            return;
        }
}

bool verifier(int valeur)
{
    return(valeur >= 0 & valeur <= 100);
}