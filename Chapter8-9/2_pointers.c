#include <stdio.h>

int main(int argc, char *argv[]){

  int Variable = 1;
  int *pVariable = &Variable;
  
  printf("Variable is stored at address %p | pVariable.\n", pVariable);
  printf("Memory address (%p) stores the value %d | *pVariable.\n", pVariable, *pVariable);
  return 0;
}
