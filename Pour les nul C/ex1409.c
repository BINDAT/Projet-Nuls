#include <stdio.h>
#include <string.h>

int main ()
{
    struct date //création de la structure date et de ses instructions
    {
        int sjour;
        int smois;
        int sannee;
    }; 
    
    
    struct humain //création de la structure humain et de ses instructions
    { 
        struct id //création de la sous structure id et de ses instructions
        {
            char hprenom[45];
            char hnomfam[45];
        }hnom;       
        struct date hdatenaiss;//appel de la structure date avec fonction hdatenaiss
    };
    struct humain president;//attribution de structure et de ses données en lien avec la structure humain et date
    strcpy(president.hnom.hprenom,"George");
    strcpy(president.hnom.hnomfam,"Washington");
    president.hdatenaiss.sjour = 22;
    president.hdatenaiss.smois = 2;
    president.hdatenaiss.sannee = 1732;
   
    printf("Naissance de %s %sle %d/%d/%d\n",president.hnom.hprenom,president.hnom.hnomfam,president.hdatenaiss.sjour,president.hdatenaiss.smois,president.hdatenaiss.sannee);
    
    return(0);
}

/*
Observation : Ce code contient deux bloc de structures de définition avec un bloc de sous structure qui contient des variables vierges. Ils contient un bloc de structure de définition des valeurs des variables. Et un bloc d'instruction d'affichage.
*/