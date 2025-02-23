#include <stdio.h>
int main()
{
    int c;
    printf("Je vais recevoir un caractere:");
    c = getchar();
    printf("J'ai obtenu le caractere '%d'.",c);
    return(0);
}
/*
Affiche la valeur de un caractere en ASCII.
*/