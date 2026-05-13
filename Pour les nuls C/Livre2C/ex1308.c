#include <stdio.h> // strcmp() est dans string.h
#include <string.h> // strcmp() compare deux chaînes de caractères et retourne 0 si elles sont identiques

int main()
{
    char motpasse[] = "taco"; // mot de passe à trouver
    char tabsaisie[15]; // tableau de caractères pour stocker la saisie de l'utilisateur

    printf("Le mot de passe ?");
    scanf("%s", tabsaisie); // lit une chaîne de caractères depuis l'entrée standard et la stocke dans tabsaisie

    if (strcmp(tabsaisie,motpasse) == 0) // si match est égal à 0, cela signifie que les deux chaînes de caractères sont identiques
        puts("Mot de passe correct");
    else
        puts("Mauvais mot de passe. Alertez la DGSE.");
    
    return(0);
}