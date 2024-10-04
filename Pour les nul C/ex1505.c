#include <stdio.h>
#include <stdlib.h>

void sub (void);

int main ()
{
    puts("Ce programme stoppe abruptement.");
    sub();
    puts("Est-ce l'intention initiale ?");
    return(0);
}
void sub(void)
{
    puts("C'est normal.");
    exit(0);
}