#include <stdio.h>  // pour printf et scanf pour l'affichage et la saisie
#include <string.h> // pour strcpy pour copier des chaines de caractères

int main()
{
    struct monEnreg // déclaration d'une structure
    {
        char nom[32]; // déclaration d'un tableau de caractères pour le nom
        int age; // déclaration d'un entier pour l'âge
        float dette; // déclaration d'un flottant pour la dette
        float temp_de_jeu; // déclaration d'un flottant pour le temps de jeu
    } bilou, marie, daniel, susie; // déclaration de quatre variables de type struct monEnreg

    printf("Combien de temps de jeu a t'il ?\n");
    scanf("%f", &daniel.temp_de_jeu); // saisie du temps de jeu pour Daniel
    strcpy(daniel.nom, "Daniel"); // copie de la chaîne "Daniel" dans le champ nom de la structure daniel
    daniel.age = 32; // affectation de l'âge de Daniel
    daniel.dette = 32.5; // affectation de la dette de Daniel

    printf("Victime : %s\n age %d\n dette de jeu %.2f\n temps de jeu %.2f\n",daniel.nom, daniel.age, daniel.dette, daniel.temp_de_jeu);

    return(0);
}