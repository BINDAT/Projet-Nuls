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
/*
Observation : ce code fait appel a un bloc de fonction if-else au lieu de deux if pour comparer a la solution precedente pour le meme resultat que ex0806.c 
*/
