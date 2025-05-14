#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() //fonction main pas de paramètres.
{
    int r,a,b; //variable

    srand((unsigned)time(NULL)); //variable unsigned avec valeur auto attribuée aléatoirement par time(NULL)
    for(a=0; a<20; a++);
    {
        for(b=0; b<5; b++)
        {
            r=rand();
            printf("%d\t",r);
        }
        putchar('\n');
    }
    return(0);
}
/*
Observation : Génère des suites nombres avec rand et srand
*/