#include <stdio.h>
#include <string.h>
int main()
{
    char string[] = "Suis-je trop longue pour vous ?";
    printf("La chaine \"%s\" mesure %lu.\n",string,strlen(string));
    printf("La chaine \"%s\" mesure %lu.\n",string,sizeof(string));
    return(0);
}
