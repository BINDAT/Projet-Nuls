#include <stdio.h>
#include <ctype.h>

int main()
{
    char reponse;

    printf("Voulez-vous faire exploser la lune ? ");
    scanf("%c", &reponse);//analyse l'entrée du clavier
    reponse = toupper (reponse);//transformation en majuscule ici
    if(reponse == 'O')//Si entrée est O
        puts("BOUM !");
    else if(reponse == 'N')//Si l'entrée N
        puts("La lune ne craint rien.");
    else//toute les autres entrées
        puts("Cela n'est pas une réponse attendue.");
    return(0);
}
/*
Observation : Ce code affiche les des messages à l'entrée de O ou N mais rien sur les autres caractères. Laissant le choix strict sur les deux propositions.
*/