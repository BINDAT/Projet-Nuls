#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int curseur;

    for (curseur =0; curseur < argc; curseur++)
    {
        printf("%s ", argv[curseur]);
    }

    for (curseur = 1; curseur < argc; curseur++)
    {
        printf("Arg#%d %s\n",curseur,argv[curseur]);
    }
    return(0);
}

/*
Observation : ce code effectue un affichage sur le nom du programme est les valeurs.
!ATTENTION! : Ce code dois être compiler, est ensuite executer dans un terminal.
*/