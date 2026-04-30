#include <stdio.h>

#define TAILLE 6

int main()
{
    char president[TAILLE][10] = {
        "Sarkozy",
        "Coty",
        "Grevy",
        "Mitterand",
        "Chirac",
        "Pompidou"
    };
    int x,index;

    for (x=0; x<TAILLE; x++)
        puts(president[x]);

    return(0);
}