#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc;
    struct tm *present;
    int hour; 
    char *ampm;

    time(&tictoc);
    present = localtime(&tictoc);

    hour = present->tm_hour %12;
    if (hour == 0) hour = 12;
    ampm = (present->tm_hour >= 12) ? "PM" : "AM";
    

    printf("A present, nous sommes le %d/%d/%d\n",
        present->tm_mday,
        present->tm_mon +1,
        present->tm_year +1900);

    printf("L'heure actuelle : %d:%02d:%02d %s\n",
        hour,
        present->tm_min,
        present->tm_sec,
        ampm);
    
    return(0);
}