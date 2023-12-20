#include <stdio.h>
int main()
{
    int coordonnee;
    printf("Coordonnees de la cible : ");
    scanf("%d",&coordonnee);
    if(coordonnee  < -5 || coordonnee > 5){
        puts("Assez proche !");
    }
    else{
        puts("La cible est encore loin !");
    }
    return(0);
}
/*
Observation : ici le bloc de condition tout ce qui seras inferieur a -5 ou superieur a +5 seras considerer comme juste avec l'operateur OU ||
au lieu de ET &&.
*/