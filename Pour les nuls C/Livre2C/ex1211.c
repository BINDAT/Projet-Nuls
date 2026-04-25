#include <stdio.h>

int main()
{
    char prenom[16], nom[16]; 

    printf("Quel est votre prénom ? \n");
    scanf("%s",prenom);
    printf("Quel est votre nom ? \n");
    scanf("%s",nom);

    printf("Ravi de vous rencontrez %s %s\n", nom, prenom);

    return(0);
}