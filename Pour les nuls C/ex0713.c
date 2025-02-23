#include <stdio.h>
int main()
{
    char prenom [15];
    char nom [15];
    printf("Veuilliez indiquer votre prenom :");
    scanf("%s",prenom);
    printf("Veuilliez indiquer votre nom :");
    scanf("%s",nom);
    printf("Ravi de vous rencontrez %s %s. \n",prenom,nom);
    return(0);
}
/*
Observation : Ici le programme prend un chaine de charactere pour l'afficher par la suite.
prenom,nom [15]; et la var de 15 char d'attribue char qui stockeras la val.

scanf quand a lui prendras la val de la saisie clavier pour que celle ci sois remise dans la var prenom puis ensuite avec le printf elle la val sera visible.
*/