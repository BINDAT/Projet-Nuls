#include <stdio.h>

int main ()
{
    char prenom[16],nom[16];
    printf("Quel est votre prenom ? ");
    scanf("%s",prenom);
    printf("Quel est votre nom ? ");
    scanf("%s",nom);
   
    printf("Bienvenu %s,%s",nom,prenom);
    return(0);
}