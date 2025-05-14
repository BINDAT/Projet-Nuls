#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MEMBRE 5 /*Constante  MEMBRE limitée à 5*/

struct action {
    char symbole[5];
    int quantite; 
    float cours; 
    struct action *asuiv; /*Champs de données de la structure action à plusieurs variable*/
};
/* Prototypes des fonctions */
struct action *aprems; /* Pointeur vers la première action */
struct action *acour; /* Pointeur temporaire pour le parcours */
struct action *anouv; /* Pointeur pour la création de nouvelles actions. Prévois des variable pointées pour la structure action */

struct action *creer_struct(void); /*Prévois une fonction void pour la structure*/
void remplir_struc(struct action *a, int *c);
void montrer_struc(struct action *a);

int main()
{
    int x;

    for (x= 0;x<MEMBRE;x++)/*Boucle for de x=0 à x=MEMBRE sois 5 auto incrémente*/
    {
        if (x==0)
        {
            aprems=creer_struct();/*appelle de la fonction creer_struc() avec acour=aprems*/
            acour=aprems;/*Création du premier élément*/
        }
        else
        {
            /*appelle fonction creer struct() avec acour->asuiv =anouv et acour = anouv; pour probablement faire un rappel de données en cas d'échec*/
            anouv = creer_struct(); /*Création d'un nouvel élément*/
            acour->asuiv = anouv; /*Chaînage avec l'élément précédent*/
            acour = anouv; /*Déplacement du pointeur courant*/
        }
        remplir_struc(acour,x+1); /*Remplissage de action avec les données*/
    }
    acour->asuiv=NULL; /*Fin de chaîne*/

/* Affichage */
    puts("Portefeuille");
    printf("Symbole\tQte\tCours\tValeur\n");
    acour = aprems;
    while (acour)
    {
        /*appel la fonction montrer_struc(acour) pour montrer toutes les données stock dans acour et acour=acour->asuiv;*/
        montrer_struc(acour); /*Affichage des données de chaque action*/
        acour=acour->asuiv; /*Passage à l'action suivante*/
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
        exit(1);/*Si la mémoire saute la boucle for afficheras le message et elle même ré-exécutera le tout*/
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
    scanf("%f", &a->cours);/*Permet l'affichage et le scan d'entrée de frappe de clavier*/
}
void montrer_struc(struct action *a)
{
    printf("%-6s\t%5d\t%.2f\t%.2f\n",\ 
        a->symbole,
        a->quantite,
        a->cours,
        a->quantite*a->cours);/*affiche les donnée en fonction de la structure établie*/
        /*a sert a reprendre est afficher les information saisit et créer par les autres fonctions*/
}
/*
Observation : Ce code permet la saisit de 5 blocks de données d'action pour pouvoir 
            les revoirs ensuite dans la console. La constance MEMBRE limite les blocks (actuellement à 5)
            la boucle for appelle la fonction creer_struct() de action puis en fin de boucle le remplissage par remplir_struc()
            puis le block d'affichage fait appelle à la fonction montrer_struc()
*/