#include <stdio.h>

int main(int argc, char *argv[]) {
  
  float accountBalance;
  float overdraftRate = 10.0;

  printf("What is your account balance? ");
  scanf("%f", &accountBalance);

  if (accountBalance < 0) {
    printf("Your account is in red.\n");
    printf("The overdraft charge is %6.2f. \n", -accountBalance * overdraftRate / 100.0);
  } else {
    printf("Your account is in black.\n");
    printf("There is no overdraft charge.\n");
  }

  return 0;
}
