#include <stdio.h>
const char ordre = 'W'; 
int main()
{
printf("Frappez Entree :");
getchar();
putchar(ordre);
putchar(ordre+24);
putchar(ordre+32);
putchar('\n');
return (0);
}
/*
Observation : ce code n'utilse qu'une seule constante et elle est modifier grace au le parametre des putchars pour afficher un message en finaliter.
*/