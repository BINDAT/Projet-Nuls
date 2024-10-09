#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct id
{
    char primo[20];
    char nomfam[20];
}personne;

typedef struct date
{
    int sjour;
    int smois;
    int sannee;
}calendrier;

struct humain
{
    personne hnom;
    calendrier hdatenaiss;
};

int main()
{
    struct humain dev;
    strcpy(dev.hnom.primo, "Maxime");
    strcpy(dev.hnom.nomfam, "Rigaud");
    dev.hdatenaiss.sjour = 15;
    dev.hdatenaiss.smois = 12;
    dev.hdatenaiss.sannee = 1995;
 
    printf("Je suis %s %s\nné le %d/%d/%d\n",dev.hnom.primo,dev.hnom.nomfam,dev.hdatenaiss.sjour,dev.hdatenaiss.smois,dev.hdatenaiss.sannee);

    return(0);
}