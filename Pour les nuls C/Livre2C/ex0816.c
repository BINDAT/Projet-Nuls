#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    char choix; // Déclaration d'une variable de type caractère pour stocker le choix de l'utilisateur

    puts("Si vous êtes d'accord, tapez Y, sinon N les autres cas seront pas traités");
    scanf("%c", &choix); // Lecture du caractère entré par l'utilisateur et stockage dans la variable 'choix'

    if(choix == 'Y' || choix == 'y') // Vérification si le choix est 'Y' ou 'y'
    {
        printf("Vous êtes en accord (%c)\n", choix);
        return(1); // Retourne 1 pour indiquer que l'utilisateur est en accord
    }
    else if(choix == 'N' || choix == 'n') // Vérification si le choix est 'N' ou 'n'
    {
        printf("Vous êtes en désaccord (%c)\n", choix);
        return(2); // Retourne 2 pour indiquer que l'utilisateur est en désaccord
    }
    else // Si le choix n'est ni 'Y'/'y' ni 'N'/'n'
    {
        printf("Ce cas ne seras pas traité (%c)\n", choix);
        return(0); // Retourne 0 pour indiquer que le cas n'est pas traité
    }
}