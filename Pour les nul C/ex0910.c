#include <stdio.h>

int main() {
   char alphabet;

   for(alphabet = 'a'; alphabet <= 'z'; alphabet=alphabet-1)
   {
      printf("%c",alphabet);
   }
   putchar('\n');
   return (0);
}
