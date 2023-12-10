#include <stdio.h>
#define SECRET 17
int main()
{
    int devinessai;
    printf("Tentez de deviner le chiffre secret : ");
    scanf("%d", &devinessai);
    if(devinessai == SECRET)
    {
        puts("Bravo !");
    }
    else 
    {
        puts("Non ce n'est pas cela !");
    }
    return(0);
}