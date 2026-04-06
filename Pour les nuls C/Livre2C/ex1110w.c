#include <stdio.h> //Pour les entrées et sorties

int main()
{
    int boucle; //Créer une variable pour la boucle
    while(boucle < 100) //Créer une boucle while avec limite de 100
    {
        printf("%d",boucle); //Affichage
        boucle+=5; //Incrémente la variable par 5
    }
    return(0);
}