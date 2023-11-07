#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int *integerArray;
  int elementsNumber, bytesNumber;

  printf("Enter the number of elements: ");
  scanf("%d", &elementsNumber);

  bytesNumber = elementsNumber * sizeof(int);
  printf("Required memory to allocate = %d. \n", bytesNumber);
  // Memory allocation
  integerArray = (int*) malloc(bytesNumber);
  if (integerArray == NULL){
    printf("Error while allocating memory. ");
    return -1;
  }

  // Initializing elements of array.
  for (int i = 0; i < elementsNumber; i++){
    printf("Please enter value for element #%d: ", i+1);
    scanf("%d",integerArray + i);
  }

  // Display array
  for (int i = 0; i < elementsNumber; i++){
    printf("Element #%d has value of: %d.\n", i+1, integerArray[i]);
  }
  free(integerArray);

  return 0;
}
