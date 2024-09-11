#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{   
int char_count = 0, blanc =0,ponctuation =0;


   char_count += printf("%%15s = %15s\n", "hello");
   char_count +=  printf("%%14s = %14s\n", "hello");
   char_count +=  printf("%%13s = %13s\n", "hello");
   char_count +=  printf("%%12s = %12s\n", "hello");
   char_count +=  printf("%%11s = %11s\n", "hello");
   char_count +=  printf("%%10s = %10s\n", "hello");
   char_count +=  printf("%%9s = %9s\n", "hello");
   char_count +=  printf("%%8s = %8s\n", "hello");
   char_count +=  printf("%%7s = %7s\n", "hello");
   char_count +=  printf("%%6s = %6s\n", "hello");
   char_count +=  printf("%%5s = %5s\n", "hello");
   char_count +=  printf("%%4s = %4s\n", "hello");
   
   blanc += 15 - strlen("hello");
   blanc += 14 - strlen("hello");
   blanc += 13 - strlen("hello");
   blanc += 12 - strlen("hello");
   blanc += 11 - strlen("hello");
   blanc += 10 - strlen("hello");
   blanc += 9 - strlen("hello");
   blanc += 8 - strlen("hello");
   blanc += 7 - strlen("hello");
   blanc += 6 - strlen("hello");
   blanc += 5 - strlen("hello");
   blanc += 4 - strlen("hello");
    
    printf("%d nombre de caractères total capturés \n%d blanc \n ponctuation",char_count,blanc,ponctuation);
    return(0);
}