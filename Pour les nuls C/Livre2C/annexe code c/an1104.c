#include <stdio.h>

int main()
{
    int c;

    for(c=-5; c<5; c++)
        printf("%d\t",c);
    for (; c>=-5; c--)
        printf("%d\t",c);
    putchar('\n');
    return(0);
}