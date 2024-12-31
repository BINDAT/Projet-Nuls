#include <stdio.h>

int main()
{
    char sample[] = "D'ou me viendra le secours?\n";
    int index = 0;

    while(putchar(sample[index++]));

    return(0);
}