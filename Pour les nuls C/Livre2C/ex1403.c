#include <stdio.h>

int main()
{
    struct president
    {
        char nomPres[40];
        int anneeNomi;
    };
    struct president pres1 = {
        "George Washington",
        1789
    };

    printf("Le premier président est %s\n", pres1.nomPres);
    printf("Il a pris ses fonctions en %d\n", pres1.anneeNomi);

    return(0);
}