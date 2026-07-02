#include <stdio.h>
#include <string.h>

int main()
{
    struct monEnreg
    {
        char nom[32];
        int age;
        float dette;
        float temp_de_jeu;
    } bilou, marie, daniel, susie;

    printf("Combien de temps de jeu a t'il ?\n");
    scanf("%f", &daniel.temp_de_jeu);
    strcpy(daniel.nom, "Daniel");
    daniel.age = 32;
    daniel.dette = 32.5;
    daniel.temp_de_jeu = daniel.temp_de_jeu;

    printf("Victime : %s\n age %d\n dette de jeu %.2f\n temps de jeu %.2f\n",daniel.nom, daniel.age, daniel.dette, daniel.temp_de_jeu);

    return(0);
}