#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    if (unlink("wambooli") == -1)
    {
        puts("Impossible de supprimer ce fichier");
        exit(1);
    }
    puts("Le fichier a disparu.");
    return(0);
}