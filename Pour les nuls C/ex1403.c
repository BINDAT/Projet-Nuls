#include <stdio.h>

int main()
{
    struct president
    {
        char nomPres[40];
        int anneeNomi;
    };
    struct president pres1 =
    {
        "George Washington", 1789
    };
    
    printf("Le premier president est %s\n",pres1.nomPres);
    printf("Il a pris ses fonctions en %d\n",pres1.anneeNomi);

    return(0);
}
/*
Observation : Fait un bloc qui contient des informations qui sont affichées avec le bloc d'instruction d'affichage.
*/