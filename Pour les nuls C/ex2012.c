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
        case'Q':
            supprimer();
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
}