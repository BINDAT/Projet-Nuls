#include <stdio.h>

int main()
{
    int calcultrice;
    
    calcultrice = 20;
    calcultrice -5;
    calcultrice *2;
    calcultrice +42;
    calcultrice /6;
    printf("%d",calcultrice);
    return(0);
}    
/*
Solution : Cette solution reprend le résultat de la variable sans auto réaffectation de cette dernière et applique les opérations directement dessus.
*/
