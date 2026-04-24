#include <stdio.h>

int main()
{
    char prenom[16], nom[16]; // On déclare une variable de type char qui peut contenir jusqu'à 15 caractères (plus le caractère de fin de chaîne '\0')

    printf("Quel est votre prénom ? "); // On affiche un message demandant à l'utilisateur de saisir son prénom
    fgets(prenom, 16, stdin); // On lit le prénom de l'utilisateur et on le stocke dans la variable prenom
    printf("Quel est votre nom ? "); // On affiche un message demandant à l'utilisateur de saisir son nom
    fgets(nom, 16, stdin); // On lit le nom de l'utilisateur et on le stocke dans la variable nom
    printf("Ravi de vous rencontrer, %s %s\n", prenom, nom); // On affiche un message de bienvenue en utilisant le prénom et le nom de l'utilisateur
    return(0);
}