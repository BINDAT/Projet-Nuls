#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int *age;
  age = (int *)malloc(sizeof(int)*1);
  if(age == NULL)
  {
    puts("Allocation memoire impossible");
    exit(1);
  }
  printf("Quel est votre age ? ");
  scanf("%d",age);
  printf("Vous avez %d ans.\n", *age);
  return(0);
}
