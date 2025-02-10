#include <stdio.h>
#include <stdlib.h>

int main ()/*fonction principale*/
{
  int *age;/*variable pointée age*/
  age = (int *)malloc(sizeof(int)*1);/*A etudier*/
  if(age == NULL)/*Si la memoire est nulle*/
  {
    puts("Allocation memoire impossible");
    exit(1);/*sortie de if*/
  }
  printf("Quel est votre age ? ");
  scanf("%d",age);
  printf("Vous avez %d ans.\n", *age);
  return(0);
}
/*
Observation : affiche l'âge saisit sinon renvoi un message d'erreur.
*/