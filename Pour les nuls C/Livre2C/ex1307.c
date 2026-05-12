#include <stdio.h>
#include <string.h>

int main()
{
    char motpasse[] = "taco";
    char tabsaisie[15];
    int match;

    printf("Le mot de passe ?");
    scanf("%s", tabsaisie);

    match = strcmp(tabsaisie,motpasse);
    if (match == 0)
        puts("Mot de passe correct");
    else
        puts("Mauvais mot de passe. Alertez la DGSE.");
    
    return(0);
}