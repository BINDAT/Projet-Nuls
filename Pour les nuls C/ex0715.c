#include <stdio.h>
int main()
{
    float fav;
    printf("Saissisez votre chiffre favori : ");
    scanf("%f",&fav);
    printf("%f est mon nombre favori aussi ! \n",fav);
    return(0);
}
/*
Observation : ici nous determinont une var float fav qui sert a stocker se qui ecrit dans le scanf 
et ressorti ensuite dans le printf %f servent a determiner un decimal.
*/