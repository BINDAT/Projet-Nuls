#include <stdio.h>

int main()
{
    struct monEnreg {
        char nom[32];
        int age;
        float dette;
        float heure_de_jeu;
    } bilou, marie, daniel, susie;
    
    struct monEnreg humain;
    bilou.nom;
    bilou.age = 49;
    bilou.dette = 69;
    bilou.heure_de_jeu = 5;

    printf("Victime : %s\n âge %i\n dette %f\n temps en heure %f\n", bilou.nom, bilou.age,bilou.dette,bilou.heure_de_jeu);

    return(0);
}