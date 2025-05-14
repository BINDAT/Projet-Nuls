#include <stdio.h>
int main()
{
    char personne [10];
    printf("Qui etes-vous? ");
    fgets(personne,10,stdin);
    printf("Hereux de vous rencontrer %s. \n",personne);
    return(0);
}
/*
Observation : Ici le programme prend un chaine de charactere pour l'afficher par la suite.
personne [10]; et la var de 10 char d'attribue char qui stockeras la val.

fgets quand a lui prendras la val de la saisie clavier avec stdin pour que celle ci sois remise dans la var personne puis ensuite avec le printf elle la val sera visible.
*/