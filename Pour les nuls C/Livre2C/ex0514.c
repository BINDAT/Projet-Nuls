#include <stdio.h>

#define VALEUR1 3 
#define VALEUR2 1

int main()
{
    printf("La valeur est %d\n", VALEUR1);
    printf("et %d est bien la valeur.\n", VALEUR1);
    printf("Ce n'est pas %d,\n", VALEUR1+VALEUR2);
    printf("ni %d non plus.", VALEUR1-VALEUR2);
    printf("Non, la valeur rest %d.\n", VALEUR1);
    return(0);
}