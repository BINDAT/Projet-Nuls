#include <stdio.h>
#include <string.h>

int main()
{
    struct monEnreg {
        char nom[32];
        int age;
        float dette;
        float heure_de_jeu;
    } bilou, marie, daniel, susie;
    
    struct monEnreg humain;
    strcpy(bilou.nom , "Bilou");
    bilou.age = 49;
    bilou.dette = 69.0f;
    bilou.heure_de_jeu = 5.0f;

    printf("Victime : %s\n âge %i\n dette %1.f\n temps en heure %1.f\n", bilou.nom, bilou.age,bilou.dette,bilou.heure_de_jeu);

    return(0);
}