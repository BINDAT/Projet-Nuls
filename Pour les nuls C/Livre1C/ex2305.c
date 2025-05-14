#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

int main()
{
    char dosscour[255]; /*Var tableau avec limite définie*/

    getcwd(dosscour, 255); /*Prend le chemin d'accès pour le mettre en mémoire*/
    printf("Dossier courant : %s\n", dosscour);/*Ici la mémoire de la var et afficher sois le chemin d'accès*/
    mkdir("ultra_tempo", 755);  //L11 pour Unix /*Modifie le contenu du dit chemin d'accès pour ajouter un dossier*/
    puts("Nouveau dossier fait.");
    chdir("ultra_tempo");/*Ici change de chemin pour le dossier créer*/
    getcwd(dosscour, 255);/*Prend en mémoire ici le nouveau chemin d'accès et le mets en mémoire*/
    printf("Dossier courant : %s\n", dosscour);/*Pour afficher ici le dossier créer*/
    return(0);
}