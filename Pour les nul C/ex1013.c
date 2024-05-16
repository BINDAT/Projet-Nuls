#include <stdio.h> //librairie
#include <stdlib.h> //librairie
#include <stdbool.h>//Librairie pour utilser les fonctions Vrai/Faux
#include <time.h> // Pour utiliser time()

bool verifier(int valeur); //Fonction prototype de verifier

void limiter(int stop, int ordi_stop); //fonction void limiter

int main()//fonction main
{
//instructions du main
  int s;

  srand(time(NULL)); //Genere un nombre aleatoire 
  int ordi_stop = rand() %101; //L'ordinateur choisit une valeur de 0 a 100

  printf("Indiquez une valeur pour stopper (0-100):");
  scanf("%d", &s); //prend l'entree du clavier
   if(verifier(s)){ //la var verifier prend dans la var s (entrer memoire du clavier) pour la correspondance des valeurs.
   limiter(s, ordi_stop);
   }else{
   printf("La valeur n'est pas comprise dans la plage \n");
   }return(0); //j'avais oublier ce bloc d'instruction conditionnel pour que cela fonctionne bien
}
bool verifier(int valeur){
  //instruction de la fonction verifier
  return (valeur >= 0 && valeur <=100); //Dans la plage retourne vrai hors de la plage retourne faux et limite
  
}
//fonction de définition de void limiter
void limiter(int stop, int ordi_stop)
{
  //instructions du void limiter
  int x;
  for(x=0; x<=100; x=x+1)//limite a 100 avec gain de +1 dans la boucle
  {
    printf("%d", x);
    if(x == stop)
      {
        puts("Vous gagnez !");
        return;
      }
  }
  if(x == ordi_stop){
    puts("L'ordi gagne!");
    return;
  }
  puts("Personne ne gagne");
}

/*
Observation : Le code ce termine sans erreur et fonctionne correctemment. il permet un petit duel entre l'ordinateur avec une boucle qui compte les nombres et une verification que cela est bien dans la plage
des nombres demander.
*/
