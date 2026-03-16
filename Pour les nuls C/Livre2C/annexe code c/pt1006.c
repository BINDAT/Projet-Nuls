#include <stdio.h>

void graph(int cmptr)
{
    for (int x = 0; x<cmptr; x=x+1,putchar('*'))
        putchar('\n');
}

int main()
{
    for (int valeur = 2; valeur <= 64; graph(valeur), printf("La valeur est %d\n", valeur), valeur = valeur * 2);
    return(0);
}