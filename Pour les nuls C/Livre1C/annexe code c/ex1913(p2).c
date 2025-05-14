#include <stdio.h>

int main()
{
    char sample[] = "D'ou me viendra le secours?\n";
    char *pointeur;

    pointeur = sample;

    while(putchar(*pointeur++))
      ;
    return(0);
}