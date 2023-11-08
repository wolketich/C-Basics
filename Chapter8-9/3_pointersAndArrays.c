#include <stdio.h>

int main(int argc, char *argv[]){

  int array[10];
  int *pArray = &array;

  printf("Address of first item, referenced by array[0] equals to %p. \n", &array[0]);
  printf("Address of array, referenced by array itself, equals to %p. \n", &array);
  printf("Address of pointer that points to &array, equals to %p.\n", pArray);

  return 0;
}
