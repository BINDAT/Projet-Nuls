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

    strcpy(bond.acteur, "Roger Moore");
    bond.annee = 1973;
    strcpy(bond.titre,"Live and Let Die");
    
    a007 = fopen("bond.db","a");
       
        if (!a007)
        {
            puts("SPECTRE gagne !");
            exit(1);
        }
        fwrite(&bond, sizeof(struct filmo), 1, a007);
    
    strcpy(bond.acteur, "Pierce Brosnan");
    bond.annee = 1995;
    strcpy(bond.titre,"GoldenEye");
    
    fwrite(&bond, sizeof(struct filmo), 1, a007);
    fclose(a007);
    puts("Enregistrement ecrit");

    return(0);
}