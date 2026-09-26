#include <stdio.h> // pour printf et scanf

int main(int argc, char *argv[])
{
    if(argc>1) // si le nombre d'arguments est supérieur à 1, c'est-à-dire si un nom a été passé en argument
        printf("Bienvenue %s\n", argv[1]);
    return(0); // fin de la fonction main
}