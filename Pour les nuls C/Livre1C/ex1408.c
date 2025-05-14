#include <stdio.h>
#include <string.h>

int main ()//fonction principale
{
    struct date //fonction de structure date avec ses instructions
    {
        int sjour;
        int smois;
        int sannee;
    };
    struct humain //fonction de structure humain avec ses instructions
    {
        char hnom[45];
        struct date hdatenaiss;
    };
    struct humain president; //création d'un humain de nom president avec ses données

    strcpy(president.hnom,"George Washington");
    president.hdatenaiss.sjour = 22;
    president.hdatenaiss.smois = 2;
    president.hdatenaiss.sannee = 1732;

    printf("Naissance de %s le %d/%d/%d\n",president.hnom,president.hdatenaiss.sjour,president.hdatenaiss.smois,president.hdatenaiss.sannee);

    return(0);
}

/*
Observation : Ce code contient deux bloc de structures de définition qui contient des variables vierges. Ils contient un bloc de structure de définition des valeurs des variables. Et un bloc d'instruction d'affichage.
*/