#include <stdio.h> // pour entrée/sortie

void prompt(); // Prototypage de la fonction prompt() pour afficher l'invite de commande

int main() // Fonction principale
{
    int loop; // Déclaration de la variable loop pour contrôler le nombre d'itérations de la boucle
    char input[32]; // Déclaration d'un tableau de caractères pour stocker l'entrée utilisateur, avec une taille de 32 caractères

    loop=0; // Initialisation de la variable loop à 0 pour commencer la boucle
    while (loop < 5) // Boucle qui s'exécute tant que loop est inférieur à 5
    {
        prompt(); // Appel de la fonction prompt() pour afficher l'invite de commande
        fgets(input, 31, stdin); // Lecture de l'entrée utilisateur à partir de stdin (standard input) et stockage dans le tableau input, avec une limite de 31 caractères pour éviter les débordements
        loop = loop+1; // Incrémentation de la variable loop pour avancer dans la boucle
    }
    return(0); // Retourne 0 pour indiquer que le programme s'est terminé avec succès
}

/* Fonction prompt() */

void prompt()
{
    printf("C:\\DOS> ");
}