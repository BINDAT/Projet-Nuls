#include <stdio.h>
#include <ctype.h>

int main()
{
    char phrase [] = "Art. 4. : La liberté consiste à pouvoir faire tout ce qui ne nuit pas à autrui : ainsi, l'exercice des droits naturels de chaque homme n'a de bornes que celles qui assurent aux autres Membres de la Société la jouissance de ces même droits. Ces bornes ne peuvent être déterminées que par la Loi.";

    int index, alpha, blank, punct, caps, lcase,total;

    alpha = blank = punct = caps, lcase = total = 0;

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
                
            if(isupper(phrase[index]))
                caps++;
            if(islower(phrase[index]))
                lcase++;
            index++;
        total = alpha+blank+punct+caps+lcase;
        }
    /* Affichage */
        printf("\"%s\"\n",phrase);
        puts("Statistiques :");
        printf("%4d lettres de l'alphabet\n",alpha);
        printf("%4d blancs\n",blank);
        printf("%4d signes de ponctuation\n",punct);
        printf("%4d Les majuscules\n", caps);
        printf("%4d Les minuscules\n",lcase);
        printf("%4d Voici le totals des caractères utilisés\n",total);
    return(0);
}

/*
Observation : Ce code compte le nombre de caractères dans une chaîne de caractères les majuscule minuscule les blancs et les lettres et tout cela ensuite.
avec un alignement de 4 avec %4d
*/