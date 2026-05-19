#include <stdio.h>

int main()
{
    char *president [][2]= {{"George", "Washington"}, {"John", "Adams"}, {"Thomas", "Jefferson"}, {"James", "Monroe"}};
    for (int défilement = 0; défilement < 4; défilement ++)
    {
      printf("%-10s %s\n",president[défilement][0], president[défilement][1]);
    }
    return(0);
}