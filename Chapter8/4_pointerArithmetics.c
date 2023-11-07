#include <stdio.h>

int main(int argc, char *argv[]){

  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *pArray = array;

  for (int i = 0; i < 10; i++)
    printf("Array[%d] is equal to %d.\n", i, *(pArray+i));

  return 0;
}
