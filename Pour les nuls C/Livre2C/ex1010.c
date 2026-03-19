#include <stdio.h> // pour printf et putchar

float convertir(float f); // prototype de la fonction convertir

int main()
{
    float temp_f, temp_c; // déclaration des variables temp_f et temp_c de type float

    printf("Température en Fahrenheit : "); // affichage d'un message pour demander à l'utilisateur de saisir une température en Fahrenheit
    scanf("%f", &temp_f); // lecture de la température en Fahrenheit saisie par l'utilisateur et stockage dans la variable temp_f
    //temp_c = convertir(temp_f); // appel de la fonction convertir avec temp_f comme argument et stockage du résultat dans temp_c
    printf("%.1fF vaut %.1fC\n", temp_f, convertir(temp_f)); // Affichage de la température en Fahrenheit et de la température convertie en Celsius avec une précision d'une décimale
    return(0); // fin de la fonction principale, retourne 0 pour indiquer que le programme s'est terminé avec succès
}

float convertir(float f)
{
    float t;

    t = (f- 32) / 1.8; // calcul de la température en Celsius à partir de la température en Fahrenheit en utilisant la formule de conversion
    return(t); // retour de la température convertie en Celsius
}