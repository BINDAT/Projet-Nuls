#include <stdio.h>

int main()
{
    int nombre1, nombre2,nombre3,calculatrice;
    nombre1 = 12;
    nombre2 = 3;
    nombre3 = 2;
    calculatrice = nombre1 / nombre2 / nombre3;
    printf("%d",calculatrice);
    return(0);
}
/*
Solution : Cette solution à des var avec des val sans interaction directement entre elle et ne contiennent aucun opérateurs mathématiques. La var calcultrice prend en charge les var et leurs val avec implémentation des opérateurs mathématiques écrits à la main.
*/