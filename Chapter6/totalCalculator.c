#include <stdio.h>

int main(int argc, char *argv[]){

  float sum, number;

  while (number != 0){
    printf("Enter a number to add to sum (Current total - %f):", sum);
    scanf("%f",&number);

    sum += number;
  }

  printf("Total sum is equal to %f.\n", sum);

  return 0;
}
