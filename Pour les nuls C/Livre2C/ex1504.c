#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int curseur;
    while(curseur < argc)
    {
        printf("%s ",argv[curseur]);
        curseur++;
    }
    
    while (curseur < argc)
    {
        printf("Arg#%d %s\n",curseur+1,argv[curseur]);
        curseur++;    
    }
    
}