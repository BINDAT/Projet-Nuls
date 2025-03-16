#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *handle;
    int scoremax[5];

    handle = fopen("scores.dat", "w");
    if (!handle)
    {
        puts("Erreur fichier!");
        exit(1);
    }
    printf("Indiquez cinq score : ");
    int boucle = 0;
    while(boucle < 5)
    {
        printf("score #%d : ",boucle +1);
        scanf("%d", &scoremax[boucle]);
        boucle++;
    }
    fwrite(&scoremax, sizeof(int), 5, handle);
    fclose(handle);
    puts("Score sauf");
    return(0);
}