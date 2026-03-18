#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie pour utiliser printf()

void vegas(void); // Prototypage de la fonction vegas()

int main() // Fonction principale
{
    int a; // Déclaration de la variable a

    a = 365; // Initialisation de la variable a
    printf("Dans la fonction main(), a=%d\n", a); // Affichage de la valeur de a dans la fonction main()
    vegas(); // Appel de la fonction vegas()
    printf("De retour dans la fonction main(), a=%d\n", a); // Affichage de la valeur de a après l'appel de vegas() pour montrer que a n'est pas modifié par vegas()
    return(0); // Retourne 0 pour indiquer que le programme s'est terminé avec succès
}

void vegas(void) // Définition de la fonction vegas()
{
    int a; // Déclaration d'une nouvelle variable a locale à la fonction vegas(), qui masque la variable a de main()

    a = -10; // Initialisation de la variable a locale à vegas() avec une valeur différente de celle de main()
    printf("Dans la fonction vegas(), a=%d\n", a); // Affichage de la valeur de a dans la fonction vegas(), montrant que c'est une variable différente de celle de main()
}