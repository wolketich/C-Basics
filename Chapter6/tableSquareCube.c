#include <stdio.h>

int main(int argc, char *argv[]){

  int num;
  printf("Please enter Peak Limit for Table: ");
  scanf("%i", &num);

  printf("Number   Square   Cube\n");
  printf("-----------------------\n");
  for (int i = 1; i <= num; i++)
    printf("%4d   %4d   %4d\n", i, i*i, i*i*i);

  return 0;
}
