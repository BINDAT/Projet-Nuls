#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc;
    tictoc = time(NULL);
    time(&tictoc);
    printf("Il est exactement %ld\n", tictoc);
    printf("Il est exactement %ld\n", tictoc);
    return(0);
}