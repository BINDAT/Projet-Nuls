#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    int e;

    e = rename("blorfus","fragus");
    if( e != 0)
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
    }
    puts("Le fichier porte le nouveau nom.");
    return 0;
}