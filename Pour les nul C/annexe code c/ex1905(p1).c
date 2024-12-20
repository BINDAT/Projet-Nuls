#include <stdio.h>

int main()
{
    int nombres[10];
    int x=0;
    int *pn;

    pn = nombres; /*Initialise le pointeur*/
    
    /*Rempli le tableau*/
    while(x<10)
    {
        *pn = x+1;
        pn++;
        x++;
    }
    x=0;
    pn=nombres;
    /*Affiche le tableau*/
    while(x<10)
    {
        printf("nombre[%d] = %d = %p\n",x+1,nombres[x],nombres);
        x++;
    }
    return(0);
}