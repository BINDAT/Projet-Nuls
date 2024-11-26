#include <stdio.h>
#include <ctype.h>

int main()
{
    char reponse;

    printf("Voulez-vous faire exploser la lune ? ");
    scanf("%c", &reponse);//prend la saisit de caractères O pour le if sinon else
    reponse = toupper (reponse);//convertis ici tout les caractères entrant pour qu'ils sois à défaut en majuscule
    if(reponse == 'O')
        puts("BOUM !");
    else
        puts("La lune ne craint rien.");
    return(0);
}