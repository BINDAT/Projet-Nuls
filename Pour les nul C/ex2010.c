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
    struct action *acours;
    struct action *anouv;
/* Creation de la structure en mémoire */
   aprems=(struct action *)malloc(sizeof(struct action));
   if (aprems==NULL)
   {
        puts("Erreur malloc()");
        exit(1);
   }
}