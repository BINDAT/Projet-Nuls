/* Programme interactif*/
/* Dan Gooking, Beginning Programming with C For Dummies*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct stypik
{
    int maval;
    struct stypik *asuiv;
};
struct stypik *aprems; /* Pointeur vers la première action */
struct stypik *acour;  /* Pointeur temporaire pour le parcours */
struct stypik *anouv;  /* Pointeur pour la création de nouvelles actions. Prévois des variable pointées pour la structure action */
/*Protypage des fonctions*/
int menu(void);
void ajouter(void);
void montrer(void);
void supprimer(void);
struct stypik *creer(void);

/* La fonction main() ne se charge que de la saisie.
   Le reste est dans les fonctions.
*/

int main()
{
    int choixmenu ='\0'; /* Initialise la boucle while */
    aprems = NULL;

    while (choixmenu != 'Q')
    {
        choixmenu = menu();
        switch (choixmenu)
        {
        case 'M':
            montrer();
            break;
        case 'A':
            ajouter();
            break;
        case 'S':
            supprimer();
            break;
        case 'Q':
            break;
        default:
            break;
        }
    }
    return(0);
}

/* Affiche le menu et collecte le choix */
int menu(void)
{
    int ch;

    printf("M)onter, A)jouter, S)upprimer, Q)uitter: ");
    ch = getchar();
    while (getchar() != '\n') /* Ignore la saisie superflue */
    
        ;
    return(toupper(ch));
}

/* Ajoute un membre en fin de liste */
void ajouter(void)
{
    if (aprems == NULL) /* Cas unique de aprems */
    {
        aprems = creer();
        acour = aprems;
    }
    else                /* Cherche le dernier */
    {
        acour = aprems;
        while (acour->asuiv)    /* Dernier == NULL */
            acour = acour->asuiv;
        anouv = creer();
        acour->asuiv = anouv;   /* Actualisation lien */
        acour = anouv;
    }
    printf("Indiquez une valeur numérique : ");
    scanf("%d", &acour->maval);
    acour->asuiv = NULL;
    while(getchar() != '\n')    /* Ignore la saisie superflue */
        ;
}

/* Affiche tous les enregs de la liste */
void montrer(void)
{
    int count = 1;
    if (aprems == NULL) /* Liste vide */
    {
        puts("Rien à afficher");
        return;
    }
    puts("Affichage complet :");
    acour = aprems;
    while (acour)   /* Dernier == NULL */
    {
        printf("Enregistrement %d: %d\n",count,acour->maval);
        acour = acour->asuiv;
        count++;
    }   
}

/* Supprime un enreg de la liste */
void supprimer(void)
{
    struct stypik *eprec; /* Sauve l'enreg d'avant*/
    int r,c;

    if(aprems == NULL)  /* Teste si liste vide*/
    {
        puts("Aucun enregistrement !");
        return;
    }
    puts("Choisissez quel enreg. supprimer :");
    montrer();
    printf("Enregistrement : ");
    scanf("%d",&r);
    while(getchar() != '\n')    /* Ignore la saisie superflue */
        ;
    c = 1;
    acour = aprems;
    eprec = NULL;   /* Pas de precedent du 1er*/
    while (c != r)
    {
        if(acour == NULL)   /* Teste si 'r' et dans la page */
        {
            puts("Enreg introuvable");
            return;
        }
        eprec = acour;
        acour = acour->asuiv;
        c++;
    }
    if(eprec == NULL)   /* Cas unique du 1er enreg */
        aprems = acour->asuiv;
    else                /* Raccorde precedent et suivant */
        eprec->asuiv = acour->asuiv;
    printf("L'enreg %d n'existe plus.\n",r);
    free(acour);        /* Restitue memoire */
}

/* Construit une structure vide et renvoie son adresse */
struct stypik *creer(void)
{
    struct stypik *a;

    a = (struct stypik *)malloc(sizeof(struct stypik));
    if (a == NULL)
    {
        puts("Erreur malloc()");
        exit(1);
    }
    return(a);
}