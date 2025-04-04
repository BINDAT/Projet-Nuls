#include <stdio.h>


void second(void);

extern int compteur;

void second(void)
{
    printf("%d\n",compteur+1);
}