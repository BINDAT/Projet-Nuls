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
    
    printf("Combien de temps de jeu a t'il ?\n");
    struct monEnreg humain1;
    strcpy(humain1.nom , "Bilou");
    scanf("%f", &humain1.heure_de_jeu);
    humain1.age = 49;
    humain1.dette = 69.0f;
    humain1.heure_de_jeu = humain1.heure_de_jeu;

    printf("Victime : %s\n âge %i\n dette %1.f\n temps en heure %1.f\n", humain1.nom, humain1.age,humain1.dette,humain1.heure_de_jeu);

    return(0);
}
/*
Obersevation : Ce code affiche les données cibles de la structure. Ses données sont entrées par ciblage des critères pour les faires correspondres à une valeur.
*/