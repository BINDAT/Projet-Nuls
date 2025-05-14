#include <stdio.h>

int main()
{
    int cmptr;

    cmptr = 0;
    for (;;)
    {
        printf("%d, ", cmptr);
        cmptr = cmptr +1;
        if (cmptr > 50)
        break;
    }
    putchar('\n');
    return(0);
}
/*
Obersavtion : Ici le programe compte jusqua 50 grace au if break cela est aussi une solution pour sortir d'une boucle infini
boucle infini causer ici par sois while(1) ou la maintenant par for(;;)
*/