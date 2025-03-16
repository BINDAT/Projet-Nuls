#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *handle;
    int scoremax;

    handle = fopen("scores.dat", "w");
    if (!handle)
    {
        puts("Erreur fichier!");
        exit(1);
    }
    printf("Indiquez votre meilleur score : ");
    scanf("%d", &scoremax);
    fprintf(handle, "%d", scoremax);
    fclose(handle);
    puts("Score sauf");
    return(0);
}