#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *handle; /*Contenu*/
    int scoremax[5]; /*Ici la var char pour fichier*/
    int x; /*Boucle est contenus*/

    handle = fopen("scores.dat", "r"); /*Le fichier score.dat seras ouvert en lecture*/
    if (!handle) /*en cas de soucis*/
    {
        puts("Erreur fichier!");
        exit(1);
    }
    fread(&scoremax, sizeof(int), 5, handle); /*Lis ici*/
    fclose(handle); /*Ferme la lecture*/
    for (x=0;x<5;x++) /*Renvoie de la lecture en boucle pour afficher tout le contenus*/
        printf("Meilleur score #%d: %d\n",x+1,scoremax[x]);
    return(0);
}