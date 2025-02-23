#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    
    int données [6] = {14,15,16,17,18,20}; //tableau avec données et taille
    int tableau [6]; //tableau vide juste avec taille
    
    for(int copie=0; copie<=5; copie++)
    //boucle pour la copie des données d'un tableau à l'autre
    {
    tableau[copie] = données[copie]; //lien de mise en relation des tableaux
    }
    for (int boucle =0 ; boucle <=5; boucle++)
    //boucle pour afficher les données du tableau
    {
        printf("%d: %d\n",boucle,tableau[boucle]); //Prend la valeur de la boucle pour affichage d'étape la valeur de tableau avec boucle en tableau pour faire un affichage des valeurs du tableau en fonction de l'étape de la boucle.
    }
    return(0);
}
/*
Observation : Ce code a des vals pré-enregistrées du tableau de données et le transfère dans le tableau vide. puis fait un affichage des valeurs de ce dernier.
affichage avec position de la boucle et de sa valeur contenue. 
*/