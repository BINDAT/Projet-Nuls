#include <stdio.h>

float convertir(float f); //fonction convertir var float f definition globale

int main() //bloc d'instuction primaire
{
 float temp_f, temp_c; //var interne au bloc primaire

 printf("Temperature en Fahrenheit: ");
 scanf("%f", &temp_f); //note à moi même ne pas oublier de mettre la mémoire & au temp_f 
 temp_c = convertir(temp_f); //point de conversion
 printf("%.1fF vaut %.1fC\n", temp_f, temp_c);
 return(0); //retourne tout
}

float convertir(float f) //Instruction de convertir et Detail la val de la var float f globale bloc secondaire
{
 return(f-32/1.8); //retourne a la val
}

/*
Observation : ce code convertie une temperature en Fahrenheit en celsius. la fonction convertir reprend les float et avec et fait les opérations
pour enfaire une conversation. Une fois cela fait elle renvoit la valeur dans le main ou dans la fonction convertie en temp_c (à étudier).
*/