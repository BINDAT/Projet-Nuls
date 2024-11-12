#include <stdio.h>
#include <stdlib.h>

int main()//fonction principale
{
    struct tentier//structure tentier
    {
        int a;//var a
    }tentier;//étiquette d'appelle au nom de fonction tentier
    tentier.a = 2; //fonction tentier avec attribution de var a avec attribution sur elle de sa val
    printf("%d + %d = %d\n", tentier.a,tentier.a, tentier.a+tentier.a);
    return(0);
}