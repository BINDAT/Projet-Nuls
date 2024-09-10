#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{   
int char_count = 0;
   
   char_count = printf("%%15s = %15s\n", "hello");
   char_count =  printf("%%14s = %14s\n", "hello");
   char_count =  printf("%%13s = %13s\n", "hello");
   char_count =  printf("%%12s = %12s\n", "hello");
   char_count =  printf("%%11s = %11s\n", "hello");
   char_count =  printf("%%10s = %10s\n", "hello");
   char_count =  printf("%%9s = %9s\n", "hello");
   char_count =  printf("%%8s = %8s\n", "hello");
   char_count =  printf("%%7s = %7s\n", "hello");
   char_count =  printf("%%6s = %6s\n", "hello");
   char_count =  printf("%%5s = %5s\n", "hello");
   char_count =  printf("%%4s = %4s\n", "hello");
    
    printf("%d nombre de caractères capturés",char_count);
    return(0);
}