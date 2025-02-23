#include <stdio.h>
#include <ctype.h>

int main()
{
    char phrase [] = "Art. 4. : La liberté consiste à pouvoir faire tout ce qui ne nuit pas à autrui : ainsi, l'exercice des droits naturels de chaque homme n'a de bornes que celles qui assurent aux autres Membres de la Société la jouissance de ces même droits. Ces bornes ne peuvent être déterminées que par la Loi.";

    int index, alpha, blank, punct;

    alpha = blank = punct = 0;

    /* Collecte */
        index = 0;
        while(phrase[index])
        {
            if(isalpha(phrase[index]))
                alpha++;
            if(isblank(phrase[index]))
                blank++;
            if(ispunct(phrase[index]))
                punct++;
            index++;
        }
    /* Affichage */
        printf("\"%s\"\n",phrase);
        puts("Statistiques :");
        printf("%d lettres de l'alphabet\n",alpha);
        printf("%d blancs\n",blank);
        printf("%d signes de ponctuation\n",punct);

        return(0);
}