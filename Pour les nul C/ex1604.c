#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct id //structure de définition de var pour id
{
    char primo[20];//var de primo caractère
    char nomfam[20];//var de nomfam caractère
}personne; //appel de structure par personne

typedef struct date //structure de définition de var pour date
{
    int sjour; //var jours 
    int smois; //var mois
    int sannee; //var année
}calendrier;//appel de structure par calendrier

struct humain //structure de groupement 
{
    personne hnom; //prend structure id par personne et ajoute une var hnom
    calendrier hdatenaiss; //prend structure date par calendrier et lui ajoute une var hdatenaiss
};

int main()//fonction principale
{
    struct humain dev;//structure de nom humain avec dev en var
    strcpy(dev.hnom.primo, "Maxime");//prend la var dev et hnom en lien avec primo pour lui attribuer une val en restitution avec la fonction strcpy
    strcpy(dev.hnom.nomfam, "Rigaud");//prend la var dev et hnom en lien avec nomfam pour lui attribuer une val en restitution avec la fonction strcpy
    dev.hdatenaiss.sjour = 15;//prend la var dev et hdatenaiss avec une var sjours et lui attribue une val
    dev.hdatenaiss.smois = 12;//prend la var dev et hdatenaiss avec une var smois et lui attribue une val
    dev.hdatenaiss.sannee = 1995;//prend la var dev et hdatenaiss avec une var sannee et lui attribue une val
 
    printf("Je suis %s %s\nné le %d/%d/%d\n",dev.hnom.primo,dev.hnom.nomfam,dev.hdatenaiss.sjour,dev.hdatenaiss.smois,dev.hdatenaiss.sannee);

    return(0);
}