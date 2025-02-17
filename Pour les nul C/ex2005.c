#include <stdio.h>
#include <stdlib.h>

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
        sortante = entrante;
        free(entrante);
        exit(2);
    }
    puts("Vous avez saisi :");
    printf("\"%s",sortante); 
  
    return(0);
}