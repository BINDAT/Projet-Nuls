#include <stdio.h>
  
  float temp_f, temp_c;
  temp_c = temp_f;
  temp_f = 32/1.8;

int main() //bloc d'instuction primaire
{

  printf("Temperature en Fahrenheit: ");
  scanf("%f", &temp_f); //note à moi même ne pas oublier de mettre la mémoire & au temp_f pour rappel scanf prend l'entrer du clavier.
  printf("%.1fF vaut %.1fC\n",temp_c, convertir(temp_f));//point de conversion et affichage
  return(0); //retourne tout

}
/*Dois faire la meme chose que le code en ex1011.c mais en prennant moins de place et en etant plus direct que ce dernier.*/
