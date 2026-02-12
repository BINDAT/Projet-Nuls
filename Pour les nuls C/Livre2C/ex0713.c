#include <stdio.h> //ajout de la bibliothèque standard d'entrée/sortie

int main()
{
    char prenom[15], nom[15]; //déclaration d'une variable de type chaîne de caractères (tableau de caractères) pour stocker le prénom et le nom de l'utilisateur
    printf("Veuillez indiquer votre prénom : "); //affichage d'un message demandant à l'utilisateur de saisir son prénom
    scanf("%s", prenom); //lecture de la saisie de l'utilisateur et stockage dans la variable prenom. Le format %s indique que l'on attend une chaîne de caractères.
    printf("Veuillez indiquer votre nom :"); //affichage d'un message demandant à l'utilisateur de saisir son nom
    scanf("%s", nom); //lecture de la saisie de l'utilisateur et stockage dans la variable nom. Le format %s indique que l'on attend une chaîne de caractères.
    printf("Ravi de vous saluer, %s %s", prenom, nom); //affichage d'un message de salutation qui inclut le prénom et le nom de l'utilisateur. Le format %s est utilisé pour insérer la valeur des variables prenom et nom dans la chaîne de caractères affichée.
    return(0); //indique que le programme s'est terminé avec succès. La valeur 0 est généralement utilisée pour signaler une exécution réussie.
}