#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 5

struct bot {
    int xpos;
    int ypos;
};

struct bot initialiser(struct bot b);

int main()
    {
    struct bot robots[TAILLE];
    int x;

    srandom((unsigned)time(NULL));

    for(x=0; x<TAILLE; x++)
    {
        robots[x] = initialiser(robots[x]);
        printf("Robot %d : Coord %d,%d\n", x+1,robots[x].xpos,robots[x].ypos);
    }
        return(0);
    }
    struct bot initialiser(struct bot b)
    {
        int x,y;
        x = random();
        y = random();
        x%=20;
        y%=20;
        b.xpos = x;
        b.ypos = y;
        return(b);
    }