#include <stdio.h>

int main()
{
    int nombres[10];
    int x;
    int *pn;

    pn = nombres; /*Initialise le pointeur*/
    
    /*Rempli le tableau*/
    for(x=0; x<10; x++)
    {
        *pn =x+1;
        pn++;
    }

    /*Affiche le tableau*/
    for (x=0; x<10; x++)
        printf("nombre[%d] = %d = %p\n",x+1,nombres[x],nombres);

    return(0);
}