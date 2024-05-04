#include <stdio.h>

float convertir(float f); //var float f definition globale

int main() //bloc d'instuction primaire
{
 float temp_f, temp_c; //var interne au bloc primaire

 printf("Temperature en Fahrenheit: ");
 scanf("%f", temp_f);
 temp_c = convertir(temp_f);
 printf("%.1fF vaut %.1fC\n", temp_f, temp_c);
 return(0); //retourne tout
}

float convertir(float f) //Detail la val de la var float f globale bloc secondaire
{
 float t; //la var t var interne au bloc secondaire
 
 t=(f - 32) /1.8; //la valeur et l'operation de la var t
 return(t); //retourne a la var t
}
