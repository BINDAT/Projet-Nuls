#include <stdio.h>

int main()
{
    char message[] = "Salut";
    int i = 0;

    for (message[i]; message[i];)
    {
        printf("%c en %p\n",message[i],&message[i]);
        i++;
    }
    return(0);
}