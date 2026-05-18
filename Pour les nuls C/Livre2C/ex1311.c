#include <stdio.h> // pour printf et scanf
#include <string.h> // pour strcat

int main()
{
    char primo[40]; // 40 caractères pour le prénom et le nom de famille
    char secundo[20]; // 20 caractères pour le nom de famille

    printf("Indiquez votre prénom : ");
    scanf("%s",primo); // on lit le prénom dans primo
    printf("Et votre nom de famille : ");
    scanf("%s", secundo); // on lit le nom de famille dans secundo
    strcat(primo, " "); // on ajoute un espace entre le prénom et le nom de famille
    strcat(primo, secundo); // on concatène le nom de famille à la suite du prénom
    printf("Ravi de vous voir, %s!\n", primo);
    return(0);
}