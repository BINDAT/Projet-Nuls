#include <stdio.h>

int main ()
{
    int fibo, nacci;
    //bloc d'iniatialiason des var et leurs val
    fibo = 0;
    nacci = 1;
    
    do //bloc de calcul avec while <300
    {
        printf("%d %d ", fibo, nacci);
        fibo = fibo+nacci;
        nacci = nacci+fibo;
    } while (nacci < 300 );
    putchar('\n');
    return(0);
}

/*
Observation : fait apparaitre une suite de nombre grace à deux var et leurs val en sur une ligne d'affichage avec un printf
*/