#include <stdio.h>
#include <string.h>
int main()
{
    char string[] = "Suis-je trop longue pour vous ?";
    int tableau[5];
    printf("La chaine \"%s\" mesure %lu.\n",string, strlen(string));
    printf("Le tableau mesure \"%lu\" ",strlen(tableau));
    return(0);
}
