#include <stdio.h>
int main()
{
    int coordonnee;
    printf("Coordonnees de la cible : ");
    scanf("%d",&coordonnee);
    if(coordonnee >= -5 && coordonnee <= 5){
        puts("Assez proche !");
    }
    else{
        puts("La cible est encore loin !");
    }
    return(0);
}
/*
Observation : ici le bloc de condition sert a stocker des valeurs cibles servant avec la var coordonnee pour trouver la val de la condition
qui est entre +5 et -5 mais n'etant pas encore determiner correctement 
*/