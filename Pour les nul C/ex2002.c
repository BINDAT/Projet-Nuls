#include <stdio.h>
#include <stdlib.h>

int main ()/*fonction principale*/
{  
  float celsius,fahrenheit;
  float *kelvin;
  kelvin = celsius + 273.15;
  kelvin = (fahrenheit + 459.67)*(5.0/9.0);
  kelvin = (float*)malloc(sizeof(float));/*A etudier*/
  if(kelvin == 'C' || kelvin == 'c')
  {
    puts("Température en celsius");
    exit(1);/*sortie de if*/
  }elseif(kelvin == 'F' || kelvin == 'f')
  {
   printf("Vous avez %1.f",fahrenheit*kelvin);
  }
  printf("Quel est votre température ? ");
  scanf("%f",kelvin);
  printf("Est-ce en celsius (C) ou en fahrenheit (F)?");
  scanf("%d",kelvin);
  return(0);
}
