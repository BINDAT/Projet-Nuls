#include <stdio.h> //Inclure la bibliothèque standard d'entrée/sortie

int main()
{
    char prenom[16], nom[16]; //Declare deux tableau char 

    printf("Quel est votre prénom ? \n");
    scanf("%s",prenom); //Stock la saisie dans le tableau prenom
    printf("Quel est votre nom ? \n");
    scanf("%s",nom); //Stock la saisie dans le tableau nom

    printf("Ravi de vous rencontrez %s %s\n", nom, prenom); //Affiche le nom et le prénom dans l'ordre inverse

    return(0);
}