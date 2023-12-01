#include <stdio.h>
int main()
{
    char personne [3];
    printf("Qui etes-vous? ");
    fgets(personne,3,stdin);
    printf("Hereux de vous rencontrer %s. \n",personne);
    return(0);
}
/*
Observation : Ici le programme prend un chaine de charactere pour l'afficher par la suite.
personne [3]; et la var de 3 char d'attribue char qui stockeras la val.

fgets quand a lui prendras la val de la saisie clavier avec stdin pour que celle ci sois remise dans la var personne puis ensuite avec le printf elle la val sera visible.
*/