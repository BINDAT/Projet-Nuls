#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc;

    time(&tictoc);
    printf("Il est exactement %s\n",ctime(&tictoc));
    return(0);
}