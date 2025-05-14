#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void remplacer_voyelle(char *changement);
int main()
{
    char *entrante, *sortante;
    int x;
    entrante = (char *)malloc(sizeof(char)*1024);
    if(entrante==NULL)
    {
        puts("Allocation de impossible ! Banzai !");
        exit(1);
    }
    puts("Saisissez quelque chose d'un peu long :");
    fgets(entrante,1023,stdin);
    puts("Vous avez saisi :");
    puts(entrante); 
    /*printf("\"%s\"\n",entrante); Test*/
    puts("Mais cela donne :");
    
    sortante = (char *)malloc(sizeof(char)*1024);
    if (sortante==NULL)
    {
        puts("Allocation de impossible ! Banzai !");
        exit(2);
    }
    strcpy(sortante,entrante);
    
    remplacer_voyelle(sortante);
    puts(sortante); 
    /*printf("%s",sortante)*/
    free(entrante);
    free(sortante);
    
    return(0);
}
void remplacer_voyelle(char *changement)
{
    while(*changement)
    {   
        if(strchr("aeiouAEIOU", *changement))
        {
            *changement = '@';
        }
        changement++;
    }
} 