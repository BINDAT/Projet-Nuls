#include <stdio.h>
#include <stdlib.h>

int main ()/*fonction principale*/
{  
  float celsius,fahrenheit;
  float *kelvin;
  char type;
  
  kelvin = (fahrenheit + 459.67)*(5.0/9.0);
  kelvin = (float *kelvin)malloc(sizeof(float));/*A etudier*/
  if(type == 'C' || type == 'c')
  {
    kelvin = kelvin + celsius + 273.15;
    printf("Vous avez %1.f",celsius*kelvin);
    exit(1);/*sortie de if*/
  }elseif(type == 'F' || type == 'f')
  {
   kelvin = kelvin + (fahrenheit + 459.67)*(5.0/9.0);
   printf("Vous avez %1.f",fahrenheit*kelvin);
   exit(2);
  }
  printf("Quel est votre température ? ");
  scanf("%f",kelvin);
  printf("Est-ce en celsius (C) ou en fahrenheit (F)?");
  scanf("%c",type);
  return(0);
}
