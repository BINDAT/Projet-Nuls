#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char phrase [100], majuscule[100], minuscule[100];
    int curseur;
        printf("Entrez du texte");
        fgets (phrase, sizeof(phrase),stdin);
    for(curseur = 0; phrase[curseur] != '\0'; curseur++)
    {
    majuscule[curseur] = toupper(phrase[curseur]);
    minuscule[curseur] = tolower(phrase[curseur]);
    }
printf("En majuscule : %s",majuscule);
printf("En minuscule : %s",minuscule);

return(0);
}