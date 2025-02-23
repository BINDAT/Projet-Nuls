#include <stdio.h>

int main()
{
    char *president []= {"George Washington", "John Adams", "Thomas Jefferson", "James Monroe"};
    for (int défilement = 0; défilement < 4; défilement ++)
    {
      printf("%s\n",president[défilement]);
    }
    return(0);
}