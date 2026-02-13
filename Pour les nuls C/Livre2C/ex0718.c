#include <stdio.h> //ajout de la bibliothèque standard d'entrée/sortie

#define TAILLE 10 //définition d'une constante TAILLE avec la valeur 4. Cette constante est utilisée pour spécifier la taille maximale des tableaux de caractères utilisés pour stocker le prénom et le nom de l'utilisateur.

int main()
{
    char prenom[TAILLE], nom[TAILLE]; //déclaration d'une variable de type chaîne de caractères (tableau de caractères) pour stocker le prénom et le nom de l'utilisateur
    printf("Veuillez indiquer votre prénom : "); //affichage d'un message demandant à l'utilisateur de saisir son prénom
    fgets(prenom, TAILLE, stdin); //lecture de la saisie de l'utilisateur avec la fonction fgets, qui lit une ligne de texte et stocke le résultat dans la variable prenom. La constante TAILLE indique la taille maximale du tableau
    printf("Veuillez indiquer votre nom :"); //affichage d'un message demandant à l'utilisateur de saisir son nom
    fgets(nom, TAILLE, stdin); //lecture de la saisie de l'utilisateur avec la fonction fgets, qui lit une ligne de texte et stocke le résultat dans la variable nom. La constante TAILLE indique la taille maximale du tableau
    printf("Ravi de vous saluer, %s %s", prenom, nom); //affichage d'un message de salutation qui inclut le prénom et le nom de l'utilisateur. Le format %s est utilisé pour insérer la valeur des variables prenom et nom dans la chaîne de caractères affichée.
    return(0); //indique que le programme s'est terminé avec succès. La valeur 0 est généralement utilisée pour signaler une exécution réussie.
}