/*Les librairies*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 5 //La constance TAILLE avec une val à 5
/*Structure bot*/
struct bot {
    int xpos;
    int ypos;
    //les variables
};

struct bot initialiser(struct bot b); //La structure bot avec la fonction initialiser et ses paramètres

int main()//fonction principale
    {
    struct bot robots[TAILLE]; //structure bot avec var robot contrôler par la constance TAILLE
    int x; //var x

    srandom((unsigned)time(NULL)); //cherche et prend une val aléatoire

    for(x=0; x<TAILLE; x++)//boucle avec fin par la constance TAILLE
    {
        robots[x] = initialiser(robots[x]);//reprise de la var robot avec x et la fonction initialiser 
        printf("Robot %d : Coord %d,%d\n", x+1,robots[x].xpos,robots[x].ypos);//affichage du résultat
    }
        return(0);
    }
    struct bot initialiser(struct bot b)//affectation des instructions de la structure bot avec la fonction initialiser et de ses paramètres
    {
        int x,y;
        x = random();//affecte x à la val de random
        y = random();//affecte y à la val de random
        x%=20;
        y%=20;
        b.xpos = x;//remet la val de x dans le paramètre de la fonction
        b.ypos = y;//remet la val de y dans le paramètre de la fonction
        return(b); //retour sur le paramètre b
    }