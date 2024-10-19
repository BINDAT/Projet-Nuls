#include <stdio.h>

int main()
{
    char input[448];
    int ch;
    int x = 0;

    printf("Saisissez du texte : ");
    fgets(input,447, stdin);

    while (input[x] != '\n')
    {
        ch = input[x] & 223;
        putchar(ch);
        x++;
    }
    putchar('\n');

    return(0);
}