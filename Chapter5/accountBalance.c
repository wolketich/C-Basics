#include <stdio.h>

int main(int argc, char *argv[]){
  
  float accountBalance;

  printf("Enter your account balance: \n");
  scanf("%f", &accountBalance);

  if (accountBalance < 0){
    printf("Your account is in red.\n");
  } else {
    printf("Your account is in black. \n");
  }

  return 0;
}
