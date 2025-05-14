#include <stdio.h>
int main()
{
    char code;
    
    printf("Indiquez le code d'erreur (A-C)");
    scanf(" %c",&code);
    switch(code)
    {
        case 'A':
            puts("Erreur disque, vous n'y pouvez rien.");
            break;
        case 'B':
            puts("Format invalide, applez votre avocat.");
            break;
        case 'C':
            puts("Nom de fichier incorrect, spank it.");
            break;
        default:
            puts("Haha, ni A, ni B, ni C ?");
    }
    return(0);
}
/*
Observation : ici le scanf prend l'entree du clavier pour la var code qui sert au swicht avec les differentes case que l'ont peut voirs
comme des conditions et break qui et un point d'arret sur la case.
*/