#include <stdio.h>
const char ordre = 'W'; 
int main()
{
    char a,b,c,d;
a = 'W';
b = ordre+24;
c =  ordre+32;
d ='\n';
printf("%c%c%c%c",a,b,c,d);
return (0);
}
/*
Observation : affiche le message Wow grace a la premiere lettre puis des modification avec les vars mais avec une const
*/ 