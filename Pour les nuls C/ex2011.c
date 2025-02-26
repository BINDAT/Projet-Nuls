#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MEMBRE 5

struct action {
    char symbole[5];
    int quantite;
    float cours;
    struct action *asuiv;
};
struct action *aprems;
struct action *acour;
struct action *anouv;

struct action *creer_struct(void);
void remplir_struct(struct action *a, int *c);
void montrer_struct(struct action *a);

int main()
{
    int x;

    for (x= 0;x<MEMBRE;x++)
    {
        if (x==0)
        {
            aprems=creer_struct();
            acour=aprems;
        }
        else
        {
            anouv = creer_struct();
            acour->asuiv = anouv;
            acour = anouv;
        }
        remplir_struct(acour,x+1);
    }
    acour->asuiv=NULL;

/* Affichage */
    puts("Portefeuille");
    printf("Symbole\tQte\tCours\tVavleur\n");
    acour = aprems;
    while (acour)
    {
        montrer_struct(acour);
        acour=acour->asuiv; 
    }
    return(0);
}

struct action *creer_struct(void)
{
    struct action *a;
    
    a=(struct action *)malloc(sizeof(struct action));
    if (a==NULL)
    {
        puts("Erreur malloc()");
        exit(1);
    }
    return(a);
}

void remplir_struct(struct action *a,int c)
{
    
}