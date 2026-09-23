#include <stdio.h> // pour printf et scanf
#include <string.h> // pour strcpy pour copier une chaîne de caractères

int main()
{
    struct date
    {
        int sjour;
        int smois;
        int sannee;
    }; // déclaration de la structure date qui contient trois champs : sjour, smois et sannee
    struct humain
    {
        char hnom[45];
        struct date hdatenaiss;
    };
    struct humain president; // déclaration d'une variable de type struct humain qui contient un champ hnom et un champ hdatenaiss de type struct date

    strcpy(president.hnom,"George Washington");
    president.hdatenaiss.sjour = 22;
    president.hdatenaiss.smois = 2;
    president.hdatenaiss.sannee = 1732;

    printf("Naissance de %s le %d/%d/%d\n", 
        president.hnom, 
        president.hdatenaiss.sjour, 
        president.hdatenaiss.smois, 
        president.hdatenaiss.sannee);

    return(0);
}