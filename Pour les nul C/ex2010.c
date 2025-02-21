#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct action {
        char symbole[5];
        int quantite;
        float cours;
        struct action *asuiv;
    };
    struct action *aprems;
    struct action *acour;
    struct action *anouv;
/* Creation de la structure en mémoire */
   aprems=(struct action *)malloc(sizeof(struct action));
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

   anouv = (struct action *)malloc(sizeof(struct action));
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
}    