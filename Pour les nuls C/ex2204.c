#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fh;
    char buffer[64];

    fh=fopen("hello.txt","r"); // Mode lecture
    if (fh==NULL)
    {
        puts("Ouverture du fichier impossible!");
        exit(1);
    }
    while (fgets(buffer, 64, fh))
        printf("%s",buffer);
    fclose(fh);
    return(0);
}