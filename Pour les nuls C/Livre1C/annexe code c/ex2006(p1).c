#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *entrante;
    int longue, boucle;

    entrante = (char *)malloc(sizeof(char)*1024);
    if (entrante==NULL)
    {
        puts("Allocation impossible !");
        exit(1);
    }
    puts("Saisissez du texte :");
    
    fgets(entrante, 1023, stdin);
    puts("ceci à été saisie");
    puts(entrante);
    longue = strlen(entrante);
    if (realloc(entrante, sizeof(char)*(longue+1))==NULL)
    {
        puts("Nouvelle allocation impossible !");
        exit(1);
    }
    boucle =0;
    while(boucle < longue)
    {   
        if(strchr("aeiouAEIOU", entrante[boucle]))
        {
            entrante[boucle]= '@';
        }
        boucle++;
    }
    
    /*
    for(boucle = 0; boucle < longue; boucle++)
     if(strchr("aeiouAEIOU", entrante[boucle]))
        {
            entrante[boucle]= '@';  
        }
    */

    puts("Reallocation correcte.");
    puts("Vous avez saisi :");
    printf("\"%s\"\n",entrante);
    
    free(entrante);

    return(0);
}