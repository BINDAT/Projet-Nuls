#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct filmo {
        char acteur[32];
        int annee;
        char titre[32];
    };
    struct filmo bond;
    FILE *a007;
    int count = 0;

    a007 = fopen("bond.db","r");
    if (!a007)
    {
        puts("SPECTRE gagne !");
        exit(1);
    }
    while (fread(&bond,sizeof(struct filmo), 1, a007))
        {
            printf("%s\t%d\t%s\n",
                bond.acteur,
                bond.annee,
                bond.titre);
            if (ftell(a007)> sizeof(struct filmo))
                rewind(a007);
            count++;
            if(count>10) break;
        }
    fclose(a007);
    
    return(0);
}