#include <stdio.h> // pour printf

int main()
{
    struct president // déclaration de la structure
    {
        char nomPres[40]; // nom du président
        int anneeNomi; // année de nomination
    };
    struct president pres1 = {
        "George Washington",
        1789 // initialisation de la structure
    };

    printf("Le premier président est %s\n", pres1.nomPres); // affichage du nom du président
    printf("Il a pris ses fonctions en %d\n", pres1.anneeNomi); // affichage de l'année de nomination

    return(0);
}