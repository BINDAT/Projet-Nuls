#include <stdio.h>

int main()
{
    int nombre1, nombre2,nombre3,calculatrice;
    nombre1 = 12;
    nombre2 = 5;
    nombre3 = 2;
    calculatrice = (nombre1 - nombre2) * nombre3;//prioritée instaurée grâce au parenthèses pour le calcul.   printf("%d",calculatrice);
    return(0);
}