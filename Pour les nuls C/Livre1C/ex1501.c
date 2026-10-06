#include <stdio.h>

int main (int argc, char *argv[])
{
    if(argc>1)
        printf("Bienvenue, %s!\n",argv[1]);
    return(0);
}

/*
Observation : ce code effectue un affichage sur le nom de l'utilisateur.
*/