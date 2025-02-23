#include <stdio.h>

int main()
{
    struct robot {
        int alive;
        char name[5];
        int xpos;
        int ypos;
        int strength;
    };

    printf("Taille de la structure robot : %u\n", sizeof(struct robot));/*Ici l'exercice indique un %u mais 
    un %lu est recommander pour éviter une erreur de format*/
    return(0);
}

/*
Observation : le code affiche l'empreinte mémoire de la structure 
robot (Empreinte mémoire = les octets utilisés)
*/