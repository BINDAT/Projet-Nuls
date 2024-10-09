#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct tentier
    {
        int a;
    }tentier;
    tentier.a = 2;
    printf("%d + %d = %d\n", tentier.a,tentier.a, tentier.a+tentier.a);
    return(0);
}