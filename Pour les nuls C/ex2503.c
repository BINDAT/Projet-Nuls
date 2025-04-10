#include <stdio.h>
#include <stdlib.h>
#include <errno.h> /*Bibliothéque pour la gestion des erreurs*/

int main()
{
    int e; /*création d'une variable entier e*/

    e = rename("blorfus","fragus"); /*Ici le renommage du fichier*/
    if( e != 0)/*Quand un problème est trouver*/
    {
        printf("Erreur ! ");
        switch (errno)
        {
        case EPERM:
            puts("Operation interdite.");
            break;
        case ENOENT:
            puts("Fichier introuvable");
            break;
        case EACCES:
            puts("Pas de permission.");
            break;
        case EROFS:
            puts("Fichier en lecture seule.");
            break;
        case ENAMETOOLONG:
            puts("Nom de fichier trop long.");
            break;
        default:
            puts("Trop horrible pour en dire plus !");
            break;
        }
        exit(1);
    }/*Quand tout ce passe bien*/
    puts("Le fichier porte le nouveau nom.");
    return 0;
}