#include <stdio.h> //ajout de la bibliothèque standard d'entrée/sortie

int main()
{
    char personne[10]; //déclaration d'une variable de type chaîne de caractères (tableau de caractères) pour stocker le nom de la personne

    printf("Qui êtes-vous?"); //affichage d'un message demandant à l'utilisateur de saisir son nom
    fgets(personne, 10, stdin); //lecture de la saisie de l'utilisateur et stockage dans la variable personne. La fonction fgets est utilisée pour lire une ligne de texte, et le nombre 10 indique la taille maximale du tableau
    printf("Heureux de vous rencontrer, %s.\n", personne); //affichage d'un message de salutation qui inclut le nom de la personne. Le format %s est utilisé pour insérer la valeur de la variable personne dans la chaîne de caractères affichée.
    return(0); //indique que le programme s'est terminé avec succès. La valeur
}