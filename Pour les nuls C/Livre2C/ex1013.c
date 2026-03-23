#include <stdio.h> // pour printf et putchar
#include <stdlib.h>
#include <stdbool.h> // Pour créer et utilser une fonction boolean san souicis
#include <time.h> // Pour utiliser time()


bool verifier(int valeur); // prototype de la fonction verifier 

void limiter(int nombre_du_joueur, int nombre_du_robot, int nombre_du_code); // prototype de la fonction limiter

int main() // fonction principale
{
    int nombre_du_joueur; // pour que le joueur entre sont nombre
    srand(time(NULL)); // pour utiliser de l'aléatoire
    int nombre_du_robot = rand() %101; // le robot utilise un nombre aléatoire
    int nombre_du_code = rand() %101; // le nombre à deviner ici est aléatoire
    printf("Indiquez une valeur pour stopper (0-100) : "); 
    scanf("%d", &nombre_du_joueur);
    if (verifier(nombre_du_joueur))
    {
        limiter(nombre_du_joueur, nombre_du_robot, nombre_du_code);
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
        if (nombre_du_joueur == nombre_du_code && nombre_du_robot == nombre_du_code)
        {
            printf("\nVous gagnez et le robot ! %d \n", nombre_du_code);
            return;
        }
        else if(nombre_du_joueur != nombre_du_code && nombre_du_robot != nombre_du_code)
        {
            printf("\nPersonne ne gagne vous avez %d le robot à choisi %d et le nombre à deviner était %d\n",nombre_du_joueur, nombre_du_robot, nombre_du_code);
            return;
        }
        else if(nombre_du_joueur == nombre_du_code && nombre_du_robot != nombre_du_code)
        {
            printf("\nVous seul(e) gagner %d le robot a choisi %d\n", nombre_du_joueur, nombre_du_robot);
            return;
        }
        else if(nombre_du_joueur != nombre_du_code && nombre_du_robot == nombre_du_code)
        {
            printf("Seul le robot gagne %d votre nombre %d",nombre_du_robot, nombre_du_joueur);
            return;
        }
}

bool verifier(int valeur)
{
    return(valeur >= 0 && valeur <= 100);
}