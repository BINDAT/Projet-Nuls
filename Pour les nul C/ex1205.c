#include <stdio.h>

int main()
{
    int scoremax[10];
    int x;

    for (x=0; x<=9; x++)
    {
        printf("Votre score #%d : ",x+1);
        scanf("%d",&scoremax[x]);
    }
    puts("Voici vos meilleurs scores");
    for (x= 0; x<=9; x++)
    {
        printf("#%d %d\n",x+1,scoremax[x]);
    }
    return(0);
}