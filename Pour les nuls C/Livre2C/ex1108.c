#include <stdio.h> // pour les fonctions d'entrée/sortie

#define VALEUR 15

int main()
{
    int a; // déclaration d'une variable entière

    printf("Modulus %d:\n", VALEUR); // affichage du message indiquant la valeur utilisée pour le modulus
    for(a=0; a<30; a++) // boucle for qui itère de 0 à 29, mais ne fait rien à l'intérieur (notez le point-virgule à la fin de la ligne)
        printf("%d %% %d = %d\n",a,VALEUR,a%VALEUR); // affichage du résultat du modulus de a par VALEUR pour chaque valeur de a
    return(0); // fin du programme, retourne 0 pour indiquer que tout s'est bien passé
}