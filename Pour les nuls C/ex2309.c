#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    if (unlink("wambooli") == -1)/*Si suppression impossible du fichier*/
    {
        puts("Impossible de supprimer ce fichier");/*Message afficher en cas de problème de suppression*/
        exit(1);
    }
    puts("Le fichier a disparu.");/*En cas de réussite*/
    return(0);
}