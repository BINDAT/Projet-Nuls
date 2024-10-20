#include <stdio.h>

int main()
{
    char input[448];
    int ch;
    int x = 0;

    printf("Saisissez du texte : ");
    fgets(input,447, stdin);
    
    if (input[x] >='a' && input[x] <= 'z')
    {
        while (input[x] != '\n' && input[x] !='\0')
        {
        ch = input[x] & 223;
        putchar(ch);
        x++;
        }
        putchar('\n');
    }
    else if(input[x] >='A' && input[x] <='Z')
        {
        printf("Lettre en majuscule trouver avant modification : ");    
        while (input[x] != '\n' && input[x] !='\0')
        {
        ch = input[x] & 223;
        putchar(ch);
        x++;
        }
        putchar('\n');
        }       
    else
    {
        printf("Impossible d'afficher autre chose que des lettres");
    }
    return(0);
}