#include <stdio.h>
#include <stdlib.h>

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