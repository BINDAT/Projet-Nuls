#include <stdio.h>

int main()
{
    int duo;

    for (duo=2; duo<=100; duo=duo+2)
    {
        printf("%d\t",duo);
    }
    putchar('\n');

    return(0);
}
/*
Observation : Le programme compte de deux en deux pour atteindre cent
\t tabulation \n nouvelle ligne avec le putchar
*/