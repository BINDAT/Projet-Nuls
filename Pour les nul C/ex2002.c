#include <stdio.h>
#include <stdlib.h>

int main ()/*fonction principale*/
{  
  float celsius,fahrenheit;
  float *kelvin;
  kelvin = celsius + 273.15;
  kelvin = (fahrenheit + 459.67)*(5.0/9.0);
  kelvin = (float*)malloc(sizeof(float)*1);/*A etudier*/
  if(kelvin == 'C' || 'c')
  {
    puts("Température en celsius");
    exit(1);/*sortie de if*/
  }elseif(kelvin == 'F' || 'f')
  {
   
  }
  printf("Quel est votre température ? ");
  scanf("%f",kelvin);
  printf("Vous avez %f .\n", *kelvin);
  return(0);
}
