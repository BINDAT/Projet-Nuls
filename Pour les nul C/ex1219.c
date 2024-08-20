#include <stdio.h>

#define TAILLE 3

int main()
{
char president [TAILLE][8] = {
"Sarkozy",
"Coty",
"Grevy"
    };
    int x;
    
    x = 0;
    puts(president[x]);
    return(0);  
}

/*
Observation : Ce code contient une const TAILLE qui détermine la taille du tableau. le tableau president contient le nombre que la const TAILLE lui permet et sur un maximum de de caractères. la var x elle en fonction du nombre écrit chercheras l'élément demandé.
*/