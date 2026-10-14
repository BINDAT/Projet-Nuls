#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // Déclaration de la fonction principale avec les paramètres argc et argv
{
    int curseur = 0; // Initialisation de la variable curseur à 0
    while(curseur < argc)
    {
        printf("%s ",argv[curseur]);
        curseur++;
    }
    putchar('\n'); // Affichage d'un retour à la ligne après l'affichage de tous les arguments
    curseur = 0; // Réinitialisation de la variable curseur à 0
    while (curseur < argc)
    {
        printf("Arg#%d %s\n",curseur+1,argv[curseur]);
        curseur++;    
    }
    
}