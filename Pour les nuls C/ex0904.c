#include <stdio.h>

int main()
{
    int cmptr;

    for(cmptr = 14; cmptr <= 19; cmptr = cmptr+1)
    {
        printf("%d\t", cmptr);
        if(cmptr == 19)
        {
            printf("\n");
        }
    }
    return(0);
}
/*
Obersavation : compte  a partir de 14 et ajoute +1 jusqu'a atteindre 19 printf ajoute la possibiliter de voir le resultat de test
mais fait un saut de ligne grace a la condition if avec printf("\n"); une fois 19 atteint
*/