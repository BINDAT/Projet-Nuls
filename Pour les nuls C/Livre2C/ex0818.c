#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    char code;

    printf("Indiquez le code erreur (a-c): ");
    scanf("%c", &code);

    switch (code)
    {
    case 'a':
    case 'A':
        puts("Erreur disque, vous n'y pouvez rien.");
        break;
    
    case 'b':
    case 'B': 
        puts("Format invalide, appelez votre avocat.");
        break;
    case 'c':
    case 'C':
        puts("Nom de fichier incorrect, spank it.");
        break;
    default:
        puts("Haha, ni A, ni B, ni C ?");
        break;
    }
}