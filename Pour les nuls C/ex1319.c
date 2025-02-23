#include <stdio.h>

char getch(void);

int main()
{
  
   
    {
    char primo, secundo;

    printf("Initiale de votre prénom : ");
    primo = getch();
    printf("Initiale du nom de famille : ");
    secundo = getch();
    printf("Vos initiales son '%c' et '%c' \n", primo,secundo);
    }
    return(0); 

} 
char getch(void)
    {
        char ch;

        ch = getchar();
        while(getchar() != '\n')
            ;
        return(ch);
    }