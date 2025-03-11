#include <stdlib.h>
#include <time.h>

int main()
{
    time_t tictoc;
    struct tm *present;

    time(&tictoc);
    present = localtime(&tictoc);
    printf("",);
    
    return(0);
}