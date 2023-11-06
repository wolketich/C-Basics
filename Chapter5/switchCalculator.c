#include <stdio.h>

int main(int argc, char *argv[]) {

  char operator;
  float num1, num2, result;

  printf("Please enter an arithmetic operation. (i.e 5 + 2). \n");
  scanf("%f%1s%f", &num1, &operator, &num2);

  switch (operator) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    defualt:
      printf("Error while typing expression. \n");
  }

  printf("%f %c %f = %f\n", num1, operator, num2 , result);


  return 0;
}
