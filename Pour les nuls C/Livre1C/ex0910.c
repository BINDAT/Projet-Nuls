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

/* Correction */

#include <stdio.h>

int main() {
   char alphabet;

   for(alphabet = 'z'; alphabet >= 'a'; alphabet--)
   {
      printf("%c", alphabet);
   }
   putchar('\n');
   return 0;
}