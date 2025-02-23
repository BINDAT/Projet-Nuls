#include <stdio.h>
#include <ctype.h>

int main()
{
    char phrase [] = "Art. 4. : La liberté consiste à pouvoir faire tout ce qui ne nuit pas à autrui : ainsi, l'exercice des droits naturels de chaque homme n'a de bornes que celles qui assurent aux autres Membres de la Société la jouissance de ces même droits. Ces bornes ne peuvent être déterminées que par la Loi.";

    int index, alpha, blank, punct, caps, lcase,total;//créer ici les vars int

    alpha = blank = punct = caps, lcase = total = 0; //alpha ici sert d’accumulateur des autres vars

    /* Collecte */
        index = 0; //sert au comptage des vals inscrites
        while(phrase[index])//prend la var avec comme curseur index
        {
            if(isalpha(phrase[index]))//prend avec l'opérateur isalpha la var phrase avec comme curseur index
                alpha++; //fait ajoute comme une boucle d'incrémentation à les val à la var alpha 
            if(isblank(phrase[index]))//prend avec l'opérateur isblank la var phrase avec comme curseur index
                blank++; //fait ajoute comme une boucle d'incrémentation à les val à la var blank
            if(ispunct(phrase[index]))//prend avec l'opérateur ispunct la var phrase avec comme curseur index
                punct++; //fait ajoute comme une boucle d'incrémentation à les val à la var punct
                
            if(isupper(phrase[index]))//prend avec l'opérateur isupper la var phrase avec comme curseur index
                caps++; //fait ajoute comme une boucle d'incrémentation à les val à la var caps
            if(islower(phrase[index]))//prend avec l'opérateur islower la var phrase avec comme curseur index
                lcase++; //fait ajoute comme une boucle d'incrémentation à les val à la var lcase
            index++;//stop la boucle globale est ajoute comme une boucle des vals à index
        total = alpha+blank+punct+caps+lcase;//fait le cumul des vals de toutes les vars
        }
    /* Affichage */
        printf("\"%s\"\n",phrase);
        puts("Statistiques :");
        printf("%d lettres de l'alphabet\n",alpha);
        printf("%d blancs\n",blank);
        printf("%d signes de ponctuation\n",punct);
        printf("%d Les majuscules\n", caps);
        printf("%d Les minuscules\n",lcase);
        printf("%d Voici le totals des caractères utilisés\n",total);
    return(0);
}

/*
Observation : Ce code compte le nombre de caractères dans une chaîne de caractères les majuscule minuscule les blancs et les lettres et tout cela ensuite.
*/