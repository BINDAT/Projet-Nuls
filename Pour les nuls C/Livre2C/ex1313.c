#include <stdio.h>

int main()
{
    printf("%%15s = %15s\n", "hello"); // 15 caractères de champ
    printf("%%14s = %14s\n", "hello"); // 14 caractères de champ
    printf("%%13s = %13s\n", "hello"); // 13 caractères de champ
    printf("%%12s = %12s\n", "hello"); // 12 caractères de champ
    printf("%%11s = %11s\n", "hello"); // 11 caractères de champ
    printf("%%10s = %10s\n", "hello"); // 10 caractères de champ
    printf("%%9s = %9s\n", "hello"); // 9 caractères de champ
    printf("%%8s = %8s\n", "hello"); // 8 caractères de champ
    printf("%%7s = %7s\n", "hello"); // 7 caractères de champ
    printf("%%6s = %6s\n", "hello"); // 6 caractères de champ
    printf("%%5s = %5s\n", "hello"); // 5 caractères de champ
    printf("%%4s = %4s\n", "hello"); // 4 caractères de champ
    return(0);
}