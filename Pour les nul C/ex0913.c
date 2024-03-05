#include <stdio.h>

int main()
{
    int x;

    x = 0;
    while(x < 10)
    {
        puts("Le saviez vous ?");
        x = x + 1;
    }
    return(0);
}
/*
Observation : fait apparaitre le texte 10 fois en condition while et incrementer par la valeur x = x +1 en auto comparaison
*/