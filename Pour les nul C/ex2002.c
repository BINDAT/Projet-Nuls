#include <stdio.h>
#include <stdlib.h>

int main ()/*fonction principale*/
{  
  float celsius,fahrenheit; /*variable float*/
  celsius = 273.15;/*attribution de valeur float à la variable celsius*/
  fahrenheit = (459.67)*(5.0/9.0);/*attribution de valeur à la variable fahrenheit*/
  float *kelvin;/*variable float pointée kelvin*/
  char type;/*variable de type chaîne de caractère*/
  
  kelvin = (float *)malloc(sizeof(float));/*A étudier*/
  
  if(kelvin == NULL)
  {
    printf("Erreur d'allocation mémoire.\n");
    exit(1);
  }
    printf("Quelle est votre température ? ");
    scanf("%f",kelvin);
    printf("Est-ce en celsius (C) ou en fahrenheit (F)?");
    scanf(" %c",&type);
      if(type == 'C' || type == 'c')
      {
        *kelvin = *kelvin + celsius; 
        printf("Vous avez %2.f °c\n",*kelvin);
          exit(2);/*sortie de if*/
      }else if(type == 'F' || type == 'f')
      {
        *kelvin = *kelvin + fahrenheit;
        printf("Vous avez %2.f °f\n",*kelvin);
        exit(3);
      }else
      {
        printf("Erreur d'unité de mesure de température\n");
      }

  return(0);
}
/*
Observation : Ce code propose d'afficher dans l'unité choisie grâce à la valeur entrée au clavier dans la variable type. Par la suite si c'est Celsius
la variable kelvin et en addition avec Celsius si Fahrenheit et choisie cette dernier applique une addition mêlée à une multiplication dans une division.
Dans les deux cas la valeur inscrite est reprise est retravaillée.
*/