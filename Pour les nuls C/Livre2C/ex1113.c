#include <stdio.h> //Pour les entrée est sorties

int main()
{
    float degres,radians; //Déclaration de deux variable float

    printf("Indiquez un angle en degrés : ");
    scanf("%f", &degres); //Prend la saisit et l'enregistre dans la var
    radians = 0.01745352925*degres; //radians sers de recipient à calcul en prenant une val fixe est une en mémoire
    printf("%.2f degrés valent %.2f radians.\n", degres, radians); //Affiche les degrés saisit et le radians
    return(0);
}