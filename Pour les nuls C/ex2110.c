#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc;
    struct tm *present;
    char *n_jour[7] = {"Lundi", "Mardi","Mercredi","Jeudi","Vendredi","Samedi","Dimanche"};
    char *n_mois[12] = {"Janvier","Février","Mars","Avril","Mai","Juin","Juillet","Août","Septembre","Octobre","Novembre","Décembre"};
    char **jour, **mois;
    
    time(&tictoc);
    present = localtime(&tictoc);
    
    jour = &n_jour[(present->tm_wday == 0 ? 6 : present->tm_wday - 1)];
    mois = &n_mois[present->tm_mon];
    
    printf("A present, nous sommes le %s %d/%s/%d\n",
        *jour, present->tm_mday, 
        *mois,
        present->tm_year + 1900
    );
    return(0);
}