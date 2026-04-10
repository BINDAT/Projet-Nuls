#include <stdio.h> //Pour les entrée est sorties

int main()
{
    float degres,radians; //Déclaration de deux variable float

    printf("Indiquez un angle en radians : ");
    scanf("%f", &radians); //Prend la saisit et l'enregistre dans la var
    degres = 0.01745352925*radians; //radians sers de recipient à calcul en prenant une val fixe est une en mémoire
    printf("%.2f radians valent %.2f degrés.\n", radians, degres); //Affiche les degrés saisit et le radians
    return(0);
}