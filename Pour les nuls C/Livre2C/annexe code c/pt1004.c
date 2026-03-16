#include <stdio.h>

void prompt(void)
{
    printf("C:\\> ");
}

int main()
{
    char input[32];

    for(int loop=0; loop<5; prompt(), fgets(input, 31, stdin), loop++)
    ;
    return(0);
}