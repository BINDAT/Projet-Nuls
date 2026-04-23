#include <stdio.h> // Affiche une phrase caractère par caractère

int main() // Affiche une phrase caractère par caractère
{
    char phrase[] = "Texte insignifiant"; // Phrase à afficher
    int index; // Index de caractère

    index = 0; // Initialisation de l'index
    while (phrase[index] != '\0') // Tant que le caractère n'est pas le caractère de fin de chaîne
    {
        putchar(phrase[index]); // Affiche le caractère à l'index actuel
        index++; // Incrémente l'index pour passer au caractère suivant
    }
    putchar('\n'); // Affiche une nouvelle ligne après avoir affiché la phrase
    return(0); // Indique que le programme s'est terminé avec succès
}