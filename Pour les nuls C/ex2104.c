#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc;
    int boucle = 0;
    while(boucle <20)
    {
        tictoc = time(NULL);
        time(&tictoc);
        printf("Il est exactement %ld\n", tictoc);
        printf("Il est exactement %ld\n", tictoc);
        boucle++;
    }
    return(0);
}