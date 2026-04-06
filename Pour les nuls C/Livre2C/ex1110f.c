#include <stdio.h> //Pour les entrées et sorties

int main()
{
    int boucle; //Créer une variable pour la boucle

    for(boucle = 5; boucle < 100; boucle+=5) //Boucle for initialisée à 5 par augmentation par 5 sous 100
    {
        printf("%d",boucle); //Affichage
    }
    return(0);
}