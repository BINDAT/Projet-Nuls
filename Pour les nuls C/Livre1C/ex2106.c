#include <stdio.h>
#include <time.h> /*Permet de gérer les fonction sur le temps*/

int main()
{
    time_t tictoc; /*Ici ont prend la date entièrement*/
    struct tm *present; /*La structure est un pointeur qui permet de choisir des données sur une date*/

    time(&tictoc); /*time est en valeur dans mémoire de tictoc*/
    present = localtime(&tictoc); /*present reprend la valeur de tictoc*/
    printf("A present, nous sommes le %d/%d/%d\n",
        present->tm_mon,
        present->tm_mday,
        present->tm_year); /*puis ici ont décortique pour afficher la date.*/
    return(0);
}