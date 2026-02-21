#include <stdio.h>

int main()
{
    char choix;

    puts("Si vous êtes d'accord, tapez Y, sinon N les autres cas seront pas traités");
    scanf("%c", &choix);

    if(choix == 'Y' || choix == 'y')
    {
        printf("Vous êtes en accord (%c)\n", choix);
        return(1);
    }
    else if(choix == 'N' || choix == 'n')
    {
        printf("Vous êtes en désaccord (%c)\n", choix);
        return(2);
    }
    else
    {
        printf("Ce cas ne seras pas traité (%c)\n", choix);
        return(0);
    }
}