#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *handle; /*Cette var est la pour la création*/
    int scoremax; /*Cette var pour la saisie de données*/

    handle = fopen("scores.dat", "w"); 
    if (!handle)
    {
        puts("Erreur fichier!");
        exit(1);
    }
    printf("Indiquez votre meilleur score : ");
    scanf("%d", &scoremax); /*Prend la saisie*/
    fprintf(handle, "%d", scoremax); /*écrit la donnée dans scoremax*/
    fclose(handle); /*Ferme l'écriture du fichier*/
    puts("Score sauf");
    return(0);
}