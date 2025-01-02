#include <stdio.h>

int main()
{
    char *sample = "D'ou me viendra le secours?\n";
    char *save;
    
    save = sample;
    

    while (putchar(*sample++))
    {
        ;
    }
    
    sample = save;
    puts(sample);

    return(0);
}