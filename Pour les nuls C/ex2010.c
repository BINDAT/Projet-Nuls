#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct action { /*Définition de la structure*/
        char symbole[5];
        int quantite;
        float cours; /*Définitions des champs de données*/
        struct action *asuiv; /*définition du lien de structure et champ auiv*/
    };
    struct action *aprems; 
    struct action *acour;
    struct action *anouv; /*Définition des liens de données*/
/* Creation de la structure en mémoire */
   aprems=(struct action *)malloc(sizeof(struct action)); /*Définition de l'allocation mémoire pour aprems*/
   if (aprems==NULL)
   {
        puts("Erreur malloc()");
        exit(1);
   }
/* Remplissage */
   acour = aprems;
   strcpy(acour->symbole,"GOOG");
   acour->quantite = 100;
   acour->cours = 801.19;
   acour->asuiv = NULL;

   anouv = (struct action *)malloc(sizeof(struct action)); /*Définition de l'allocation mémoire pour anouv*/
   if (anouv==NULL)
   {
        puts("Autre erreur malloc()");
        exit(1);
   }
   acour->asuiv = anouv;
   acour = anouv;
   strcpy(acour->symbole,"MSFT");
   acour->quantite = 100;
   acour -> cours = 28.77;
   acour->asuiv = NULL;
/* Affichage */
   puts("Portefeuille");
   printf("Symbole\tQte\tCours\tValeur\n");
   acour = aprems;
   printf("%-6s\t%5d\t%.2f\t%.2f\n",\
        acour->symbole,
        acour->quantite,
        acour->cours,
        acour->quantite*acour->cours);
   acour =acour->asuiv;
   printf("%-6s\t%5d\t%.2f\t%.2f\n",\
        acour->symbole,
        acour->quantite,
        acour->cours,
        acour->quantite*acour->cours);
    
    return(0);
}    