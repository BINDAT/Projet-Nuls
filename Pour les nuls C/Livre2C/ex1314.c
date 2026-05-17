#include <stdio.h> // pour printf et puts
#include <ctype.h> // pour isalpha, isblank, ispunct, isupper, islower, isdigit

int main()
{
    char phrase[] = "Art.4. : La liberté consiste à pouvoir faire tout ce qui ne nuit pas à autrui : ainsi, l'exercice des droits naturels de chaque homme n'a de bornes que celles qui assurent aux autres Membres de la Société la jouissance de ces mêmes droits. Ces bornes ne peuvent être déterminées que par la Loi. ";

    int index, alpha, blank, punct; // index pour parcourir la phrase, les autres pour compter les différents types de caractères

    alpha = blank = punct = 0; // initialisation des compteurs

/* Collecte */
    index = 0; // initialisation de l'index pour parcourir la phrase
    while (phrase[index])
    {
        if (isalpha(phrase[index]))
            alpha++;
        if (isblank(phrase[index]))
            blank++;
        if (ispunct(phrase[index]))
            punct++;
        index++;
    } // fin de la boucle de collecte pour parcourir la phrase et compter les différents types de caractères
/* Affichage */
    printf("\"%s\"\n",phrase);
    puts("Statistiques :");
    printf("%4d lettre de l'alphabet\n", alpha);
    printf("%4d blancs\n", blank);
    printf("%4d signe de ponctuation\n", punct);

    return(0);
}