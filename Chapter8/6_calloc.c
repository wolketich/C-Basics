#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]){

  float *pFloatArray;
  int nElements;

  printf("Please enter the number of elements: ");
  scanf("%d", &nElements);

  pFloatArray = (float*) calloc(nElements,sizeof(float));
  if (pFloatArray == NULL){
    printf("Error while allocating memory. \n");
    return -1;
  }

  // Add items to array from middle.
  printf("<--Initializing half of the array-->\n");
  for (int index = nElements / 2; index < nElements; index++){
    printf("Enter value for element #%d: ", index);
    scanf("%f", pFloatArray + index);
  }

  printf("<--Display array-->\n");
  for (int index = 0; index < nElements; index++){
    printf("Value for element #%d is equal to %.2f.\n", index, pFloatArray[index]);
  }


  return 0;
}

