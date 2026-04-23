#include <stdio.h>

int main()
{
    char prenom[16];

    printf("Quel est votre pénom ? ");
    fgets(prenom, 16, stdin);
    printf("Ravi de vous rencontrez, %s\n", prenom);
    return(0);
}