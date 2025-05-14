#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc;
    struct tm *present;
    char *n_jour[7] = {"Lundi", "Mardi","Mercredi","Jeudi","Vendredi","Samedi","Dimanche"};
    char *n_mois[12] = {"Janvier","Février","Mars","Avril","Mai","Juin","Juillet","Août","Septembre","Octobre","Novembre","Décembre"};
    int jour,mois;
    
    time(&tictoc);
    present = localtime(&tictoc);
    
    jour = present->tm_wday;
    if(jour == 0) jour = 7;
    mois = present->tm_mon;
    if(mois == 0) mois = 12;
    printf("A present, nous sommes le %s %d/%s/%d\n",
        n_jour[jour -1],present->tm_mday, 
        n_mois[mois -1],
        present->tm_year +1900
        );
    return(0);
}