#include <stdio.h>

int main()
{
    char a,b,c;
    char *p;

    a = 'A'; b = 'B'; c = 'C';

    printf("Apprenez votre ");
    p = &a;     //Initialise
    putchar(*p);    //Utilise
    p = &b;     //Initialise
    putchar(*p);    //Utilise
    p = &c;     //Initialise
    putchar(*p);    //Utilise
    printf("s\n");

    return(0);
}