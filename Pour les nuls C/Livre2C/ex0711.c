#include <stdio.h> // en-tête de la bibliothèque standard d'entrée/sortie

int main()
{
    char prompt[] = "Programme pour exploser le Monde" "\n" "Frappez Entrée pour exploser :"; // déclaration et initialisation d'un tableau de caractères pour le message d'invite

    printf("%s",prompt); // affichage du message d'invite
    getchar(); // attente de l'appui sur la touche Entrée
    return(0); // indique que le programme s'est terminé avec succès
}