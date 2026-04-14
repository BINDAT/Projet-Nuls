#include <stdio.h> // pour printf et scanf
#include <stdlib.h> // pour rand et srand
#include <time.h> // pour time

int main()
{
    int r, a, b;

    srand((unsigned)time(NULL));
    for (a=0; a<20; a++)
    {
        for (b=0; b<5; b++)
        {
            r=rand();
            printf("%d\t", r);
        }
        putchar('\n');
    }
    return(0);
}