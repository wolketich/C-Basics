#include <stdio.h>

int main(int argc, char *argv[]){

  int var1 = 1;
  char var2 = 'c';
  
  printf("Variable #1 with value (%d) is stored at address (%p).\n", var1, &var1);
  printf("Variable #2 with value (%c) is stored at address (%p).\n", var2, &var2);

  return 0;
}
