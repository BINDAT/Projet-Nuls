#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    int code;

    printf("Indiquez le code erreur (1-3): ");
    scanf("%d", &code); // Lecture du code d'erreur entré par l'utilisateur

    switch (code)
    {
    case 1: // Si le code d'erreur est 1
        puts("Erreur disque, vous n'y pouvez rien.");
        break;
    case 2: // Si le code d'erreur est 2
        puts("Format invalide, appelez votre avocat.");
        break;
    case 3: // Si le code d'erreur est 3
        puts("Nom de fichier incorrect, spank it.");
        break; // Le mot-clé 'break' est utilisé pour sortir du switch après avoir exécuté le cas correspondant
    default: // Si le code d'erreur ne correspond à aucun des cas précédents
        puts("Haha, ni 1, ni 2, ni 3 ?");
    }
    return(0); // Retourne 0 pour indiquer que le programme s'est terminé avec succès
}