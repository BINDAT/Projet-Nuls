#include <stdio.h>

int main()
{
    int x;

    for(x=0; x<10; x=x+1, printf("%d\n",x))
    ;
}
/*
Observation : boucle allant de 0 a 10 en premiere instruction puis avec un printf en seconde instruction en lien avec la premiere puis un ; pour instruction vide. Cette méthode
est probablement peu conventionelle.
*/