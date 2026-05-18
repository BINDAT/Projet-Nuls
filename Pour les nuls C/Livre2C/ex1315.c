#include <stdio.h> // Affiche une chaîne de caractères alignée à gauche dans un champ de largeur spécifiée

int main()
{
  printf("%-9smoi\n", "Parle -"); // 9 caractères de champ
  printf("%-8smoi\n", "Parle -"); // 8 caractères de champ
  printf("%-7smoi\n", "Parle -"); // 7 caractères de champ
  printf("%-6smoi\n", "Parle -"); // 6 caractères de champ
  printf("%-5smoi\n", "Parle -"); // 5 caractères de champ
  printf("%-4smoi\n", "Parle -"); // 4 caractères de champ
}