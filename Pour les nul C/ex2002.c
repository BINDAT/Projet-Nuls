#include <stdio.h>
#include <stdlib.h>

int main ()/*fonction principale*/
{  
  float celsius,fahrenheit;
  float *kelvin;
  kelvin = celsius + 273.15;
  kelvin = (fahrenheit + 459.67)*(5.0/9.0);
  kelvin = (float*)malloc(sizeof(float)*1);/*A etudier*/
  if(kelvin == NULL)
  {
    puts("Allocation memoire impossible");
    exit(1);/*sortie de if*/
  }
  printf("Quel est votre température ? ");
  scanf("%d",kelvin);
  printf("Vous avez %d .\n", *kelvin);
  return(0);
}
