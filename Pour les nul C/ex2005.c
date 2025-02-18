#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *entrante, *sortante;

    entrante = (char *)malloc(sizeof(char)*1024);
    if(entrante==NULL)
    {
        puts("Allocation de impossible ! Banzai !");
        exit(1);
    }
    puts("Saisissez quelque chose d'un peu long :");
    fgets(entrante,1023,stdin);
    puts("Vous avez saisi :"); 
    printf("\"%s\"\n",entrante);
    
    sortante = (char *)malloc(sizeof(char)*1024);
    if (sortante==NULL)
    {
        puts("Allocation de impossible ! Banzai !");
        
        exit(2);
    }
    strcpy(entrante, sortante);
    printf("%s",sortante); 
    free(entrante);
    free(sortante);
    return(0);
}