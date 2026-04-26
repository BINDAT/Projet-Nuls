#include <stdio.h> //Inclure la bibliothèque standard d'entrée/sortie

int main()
{
    char prenom[16], nom[16]; //Declare deux tableau char 

    printf("Quel est votre prénom ? \n");
    scanf("%15s",prenom); //Stock la saisie dans le tableau prenom en limitant la saisie à 15 caractères pour éviter les débordements de mémoire
    printf("Quel est votre nom ? \n");
    scanf("%15s",nom); //Stock la saisie dans le tableau nom en limitant la saisie à 15 caractères pour éviter les débordements de mémoire

    printf("Ravi de vous rencontrez %15s %15s\n", nom, prenom); //Affiche le nom et le prénom dans l'ordre inverse

    return(0);
}