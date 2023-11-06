#include <stdio.h>

int main(int argc, char *argv[]){

  float sum, number = 0;

  do {
    printf("Enter a number to add to sum (Current total - %f):", sum);
    scanf("%f",&number);

    sum += number;
  } while (number != 0);

  printf("Total sum is equal to %f.\n", sum);

  return 0;
}
