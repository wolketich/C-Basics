#include <stdio.h>

int main(int argc, char *argv[]) {

  float max, num1, num2;

  printf("Enter two numbers; press Enter after each number. \n");
  scanf("%f%f", &num1, &num2);

  max = (num1 > num2) ? num1 : num2;

  printf("Max(%.2f,%.2f) = %.2f.\n", num1, num2, max);

  return 0;
}
