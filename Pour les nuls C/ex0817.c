#include <stdio.h>
int main()
{
    int code; //var code
    printf("Indiquez le code d'erreur (1-3)");
    scanf("%d",&code); //Prend le nombre en entrer du clavier et l'enregistre dans la var code.
    switch(code)//prend le nombre en mémoire de la var code pour la transmettre au case.
    {
        case 1:
        puts("Erreur disque, vous n'y pouvez rien.");
        break;
        case 2:
        puts("Format invalide, applez votre avocat.");
        break;
        case 3:
        puts("Nom de fichier incorrect, spank it.");
        break;
        default:
        puts("Haha, ni 1, ni 2, ni 3 ?");
    }
    return(0);
}
/*
Observation : ici le scanf prend l'entree du clavier pour la var code qui sert au swicht avec les differentes case que l'ont peut voirs
comme des conditions et break qui et un point d'arret sur la case.
*/