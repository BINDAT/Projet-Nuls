#include <stdio.h> //librairie

void limiter(int stop); //fonction void limiter

int main()//fonction main
{
//instructions du main
  int s;

printf("Indiquez une valeur pour stopper (0-100):");
scanf("%d", &s);
limiter(s);
return(0);
}
//fonction de définition de void limiter
void limiter(int stop)
{
  //instructions du void limiter
  int x;
  for(x=0; x<=100; x=x+1)
  {
    printf("%d", x);
    if(x == stop)
      {
        puts("Vous gagnez !");
        return;
      }
  }
  puts("Je gagne !");
}
/*
Observation : ils manque a se code pour fonctionner corectement un moyen de verification de valeur sinon malgrer se fait il fonction est excute
le code jusqu'à return du printf vous avez gagnez.
*/