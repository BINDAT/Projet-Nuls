#include <stdio.h>

int main ()
{
    int fibo, nacci;
    //bloc d'iniatialiason des var et leurs val
    fibo = 0;
    nacci = 1; //les var du bloc main
    
    do //bloc de calcul avec while <300
    {
        printf("%d ", fibo); //affiche fibo avec fibo nacci
        fibo = fibo+nacci;
        printf("%d ", nacci); //affiche nacci avec nacci et fibo
        nacci = nacci+fibo;
    } while (nacci < 300 ); //bloque a la limite. mais n'afficheras pas le nombre de la limite
    putchar('\n'); //nouvelle ligne ici ajoutée.
    return(0);
}

/*
Observation : fait apparaitre une suite de nombre grace à deux var et leurs val en sur une ligne d'affichage avec deux printf
*/