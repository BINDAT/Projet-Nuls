#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    char code; // Déclaration d'une variable de type caractère pour stocker le code d'erreur

    printf("Indiquez le code erreur (a-c): "); // Affichage d'une invite à l'utilisateur pour entrer un code d'erreur
    scanf("%c", &code); // Lecture du caractère entré par l'utilisateur et stockage dans la variable 'code'

    switch (code) // Utilisation d'une structure de contrôle 'switch' pour traiter le code d'erreur
    {
    case 'a':
    case 'A': // Cas pour les codes 'a' ou 'A'
        puts("Erreur disque, vous n'y pouvez rien.");
        break;
    
    case 'b':
    case 'B': // Cas pour les codes 'b' ou 'B'
        puts("Format invalide, appelez votre avocat.");
        break;
    case 'c':
    case 'C': // Cas pour les codes 'c' ou 'C'
        puts("Nom de fichier incorrect, spank it.");
        break;
    default: // Cas par défaut si le code d'erreur ne correspond à aucun des cas précédents
        puts("Haha, ni A, ni B, ni C ?");
        break;
    }
}