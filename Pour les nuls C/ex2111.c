#include <stdio.h>
#include <time.h> /*Bibliothéque qui gère les fonctions liées aux temps*/

int main()
{
    time_t present, avant; /*Var typedef time_t*/
    float delai = 0.0; /*Var float*/

    time(&avant); /*Prend en mémoire le temps avant*/
    puts("Commencer");
    while(delai < 1)
    {
        time(&present); /*Prends l'écoulement du temps avec present en mémoire*/
        delai = difftime(present, avant); /*calcul l'ancien et le nouveau temps en float avec la var delai*/
        printf("%f\r", delai); /*Affichage*/
    }
    puts("\nStopper");
    return(0);
}