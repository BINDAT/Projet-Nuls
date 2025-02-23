#include <stdio.h>

int main()
{
    char lead;
    char*sidekick;

    lead = 'A'; /* Initialise la variable*/
    sidekick = &lead; /* Initialise le pointeur. IMPORTANT!*/

    printf("Pour la variable 'lead' :\n");
    printf("Taille\t\t%ld\n",sizeof(lead));
    printf("Contenu\t\t%c\n", lead);
    printf("Adresse\t\t%p\n", &lead);
    printf("Pour la variable 'sidekick':\n");
    printf("Contenu\t\t%p\n", sidekick);

    return(0);
}