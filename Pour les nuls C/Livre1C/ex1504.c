#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])//fonction principale avec paramètres argc et *argv
{
    int curseur;//création de var curseur

    for (curseur =0; curseur < argc; curseur++)//boucle de avec curseur à 0 et argc qui sert argv
    {
        printf("%s ", argv[curseur]);//argv qui prend en table curseur afficher dans printf
    }

    for (curseur = 1; curseur < argc; curseur++)
    {
        printf("Arg#%d %s\n",curseur,argv[curseur]);//curseur et argv[curseur] affiche un argument avec sont numéro
    }
    return(0);
}

/*
Observation : ce code effectue un affichage sur le nom du programme est les valeurs.
!ATTENTION! : Ce code dois être compiler, est ensuite executer dans un terminal.
*/