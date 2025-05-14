#include <stdio.h>
#include <string.h>

int main()
{
    char primo[40];
    char secundo[20];
    
    printf("Indiquez votre prenom : ");
    scanf("%s", primo); //prend la saisie et l'ajoute en valeur de primo.
    printf("Et votre nom de famille : ");
    scanf("%s", secundo); //prend la saisie et l'ajoute en valeur de secundo.
    strcat(primo, " ");//strcat prend deux valeurs pour en faire une seule la juste pour ajouter un espace à primo.
    strcat(primo, secundo); //strcat prend deux valeurs pour en faire une seule.
    printf("Ravi de vous voir, %s!\n", primo);
 return(0);   
}
/*
Observation : Ce code affiche votre prénom et nom avec un espace. Après la saisie.
*/