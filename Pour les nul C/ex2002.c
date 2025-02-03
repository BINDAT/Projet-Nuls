#include <stdio.h>
#include <stdlib.h>

int main ()/*fonction principale*/
{  
  float celsius,fahrenheit;
  celsius = 273.15;
  fahrenheit = (459.67)*(5.0/9.0);
  float *kelvin;
  char type;
  
  kelvin = (float *)malloc(sizeof(float));/*A etudier*/
  
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
          exit(1);/*sortie de if*/
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
