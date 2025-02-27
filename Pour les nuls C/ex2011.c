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
void remplir_struc(struct action *a, int *c);
void montrer_struc(struct action *a);

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
        remplir_struc(acour,x+1);
    }
    acour->asuiv=NULL;

/* Affichage */
    puts("Portefeuille");
    printf("Symbole\tQte\tCours\tValeur\n");
    acour = aprems;
    while (acour)
    {
        montrer_struc(acour);
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

void remplir_struc(struct action *a, int *c)
{
    printf("Membre #%d/%d:\n",c,MEMBRE);
    printf("Symbole: ");
    scanf("%s", a->symbole);
    printf("Nombre d'actions : ");
    scanf("%d", &a->quantite);
    printf("Cours : ");
    scanf("%f", &a->cours);
}
void montrer_struc(struct action *a)
{
    printf("%-6s\t%5d\t%.2f\t%.2f\n",\ 
        a->symbole,
        a->quantite,
        a->cours,
        a->quantite*a->cours);
}