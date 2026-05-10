#include <stdio.h> // pour printf et scanf
#include <ctype.h> // pour toupper

int main()
{
    char reponse; // pour stocker la réponse de l'utilisateur
    printf("Voulez-vous faire exploser la lune ?");
    scanf("%c",&reponse); // lire la réponse de l'utilisateur
    reponse = toupper(reponse); // convertir la réponse en majuscule
    if (reponse == 'O') // si la réponse est 'O' (oui)
        puts("BOUM!");
    else if (reponse == 'N') // si la réponse est 'N' (non)
        puts("La lune ne craint rien.");
    else // si la réponse n'est ni 'O' ni 'N'
        puts("Votre réponse n'est ni oui ni non");
    return(0);
}