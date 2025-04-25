#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *handle; /*Cette var est la pour la création*/
    int scoremax; /*Cette var pour la saisie de données*/

    handle = fopen("scores.dat", "w"); /*handle avec fopen créer le fichier score.dat en écriture (w)*/
    if (!handle) /*En cas d'erreur*/
    {
        puts("Erreur fichier!");
        exit(1);
    }
    printf("Indiquez cinq score : ");
    int boucle = 0; /*Initialise la boucle à 0*/
    while(boucle < 5) /*La boucle permet 5 entrées*/
    {
        printf("score #%d : ",boucle +1); /*affiche les saisies dans la boucle avec +1 pour éviter 0*/
        scanf("%d", &scoremax); /*Prend la saisie*/
        boucle++; /*Incrémente la boucle*/
    }
    fwrite(&scoremax, sizeof(int), 5, handle); /*écrit les 5 entrées de scoremax*/
    fclose(handle); /*Ferme l'écriture du fichier*/
    puts("Score sauf");
    return(0);
}