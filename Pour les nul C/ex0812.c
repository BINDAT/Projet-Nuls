#include <stdio.h>
#define SECRET 17 //création de la constances SECRET établie à 17
int main()
{
    int devinessai; //création de devinessai
    printf("Tentez de deviner le chiffre secret : ");
    scanf("%d", &devinessai);//prend la saisit de clavier et la stock dans la var devinessai
    if(devinessai == SECRET)//si la val de la var devinessai correspond à la val de la const SECRET.
    {
        puts("Bravo !");
    }
    else //cas contraire
    {
        puts("Non ce n'est pas cela !");
    }
    return(0);
}
/*
Observation : ce code fait appel a un bloc de fonction if-else au lieu de deux if pour comparer a la solution précédente pour le même résultat que ex0806.c 
*/
