#include <stdio.h>

int main ()
{
    char prenom[16],nom[16];

    printf("Quel est votre prenom ? ");
    fgets(prenom, 16, stdin);
    printf("Quel est votre nom ?");
    fgets(nom,16,stdin);
    printf("Bienvenu %s %s",nom,prenom);
    return(0);
}