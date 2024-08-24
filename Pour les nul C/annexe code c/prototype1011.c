#include <stdio.h>
  
  float convertir(float fahrenheit)
  {
    return(fahrenheit -32)/1.8;
  }
int main() //bloc d'instuction primaire
{
  float temp_f, temp_c;
 
  printf("Temperature en Fahrenheit: ");
  scanf("%f", &temp_f); //note à moi même ne pas oublier de mettre la mémoire & au temp_f pour rappel scanf prend l'entrer du clavier.
  temp_c, convertir(temp_f);//point de conversion
  printf("%.1fF vaut %.1fC\n", temp_f, temp_c); 
  return(0); //retourne tout

}
/*Dois faire la meme chose que le code en ex1011.c mais en prennant moins de place et en etant plus direct que ce dernier.*/
