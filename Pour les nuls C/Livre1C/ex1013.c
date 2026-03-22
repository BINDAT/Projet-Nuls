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
   limiter(s, ordi_stop);//Prend ici la var s et sa valeur en memoire avec la var de ordi_stop.
   }else{
   printf("La valeur n'est pas comprise dans la plage \n");
   }return(0); //j'avais oublier ce bloc d'instruction conditionnel pour que cela fonctionne bien
}
bool verifier(int valeur){
  //instruction de la fonction verifier
  return (valeur >= 0 && valeur <=100); //Dans la plage retourne vrai hors de la plage retourne faux et limite
  
}
//fonction de définition de void limiter
void limiter(int stop, int ordi_stop) //point de comparaison
{
  int boucle;
  for (boucle = 0; boucle<=100; boucle++)
  {
    printf("%d\t",boucle);
  }
  putchar('\n');
  //instructions du void limiter
  if (stop == ordi_stop)
  {
    printf("Tu gagne !");
  }
  else
  {
    printf("Je gagne mon nombre est : %d", ordi_stop);
  } 
  
}

/*
Observation : Le code ce termine sans erreur et fonctionne correctement. il permet un petit duel entre l'ordinateur avec une boucle qui compte les nombres et une verification que cela est bien dans la plage
des nombres demander.
*/
