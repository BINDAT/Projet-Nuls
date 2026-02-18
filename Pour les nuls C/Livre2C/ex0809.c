#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    int a,b; // Déclaration de deux variables entières nommées 'a' et 'b'

    a = 5;
    b = -3;

    if (a==b);
        printf("%d égale %d\n", a,b); // Cette ligne sera exécutée indépendamment de la condition if en raison du point-virgule après la condition, ce qui crée un bloc de code vide pour le if. Par conséquent, cette ligne affichera toujours les valeurs de 'a' et 'b', même si elles ne sont pas égales.
    return(0); // Retourne 0 pour indiquer que le programme s'est terminé avec succès
}