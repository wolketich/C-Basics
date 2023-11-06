#include <stdio.h>

int main(int argc, char *argv[]) {

  int maxNumber;
  printf("Enter size of the multiplication table - ");
  scanf("%d", &maxNumber);

  printf("   ");
  for (int i = 1; i <= maxNumber; i++)
    printf("%5d", i);
  printf("\n   +");

  for (int i = 0; i <= maxNumber * 5; i++)
    printf("-");

  for (int i = 1; i <= maxNumber; i++) {
    printf("\n%2d |", i);
    for (int j = 1; j <= maxNumber; j++)
      printf("%5d", i*j);
  }
  putchar('\n');

  return 0;
}
