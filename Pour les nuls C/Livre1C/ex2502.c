#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x; /*var non pointée*/
    int *px; /*var pointée*/

    px = &x; /*prise en mémoire en non pointée*/
    for (x=0; x < 10; x++)/*boucle avec auto incrémentation*/
        printf("%d", *px);/*affichage*/
    return 0;
}