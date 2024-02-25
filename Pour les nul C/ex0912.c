#include <stdio.h>

int main()
{
    int alpha;

    for (alpha ='A'; alpha <='Z'; alpha=alpha+1)
    {
        printf("%c\t",alpha);
        printf("%c\t",alpha);
        printf("%c\t",alpha);
        putchar('\n');
    }
    return(0);
}
/*
Obersavion : creer des boucles avec trois print de A à Z 
*/