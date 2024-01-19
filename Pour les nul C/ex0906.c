#include <stdio.h>

int main()
{
    int trio;

    for (trio=3; trio<=100; trio=trio+3)
    {
        printf("%d\t",trio);
    }
    putchar('\n');

    return(0);
}
/*
Observation : Le programme compte de trois en trois pour atteindre cent
\t tabulation \n nouvelle ligne avec le putchar
*/