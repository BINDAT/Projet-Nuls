#include <stdio.h>

int main()
{
    int rebours;

    for (rebours =25; rebours >=0; rebours=rebours -1)
    {
        printf("%d\t",rebours);
    }
    putchar('\n');

    return(0);
}
/*
Observation : Le programme compte a rebours de 25 a 0
\t tabulation \n nouvelle ligne avec le putchar
*/