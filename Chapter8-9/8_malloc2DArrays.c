#include <stdio.h>
#include <stdlib.h>

int main(){

  int nCols, nRows;
  int **intArray; // Array of pointers to a pointer.

  printf("Enter number of rows: ");
  scanf("%d", &nRows);

  printf("Enter number of columns: ");
  scanf("%d", &nCols);

  // Allocate memory for the array of rows.
  intArray = (int**) malloc(nRows * sizeof(int*));
  if (intArray == NULL) {
    printf("Error while allocating memory for a dynamic 2D array. \n");
    return -1; // No need to free here since nothing was allocated yet
  }

  // Allocate memory for each row.
  for (int i = 0; i < nRows; i++) {
    intArray[i] = (int *) malloc(nCols * sizeof(int));
    if (intArray[i] == NULL) {
      // Free all previously allocated memory before returning.
      for (int j = 0; j < i; j++) {
        free(intArray[j]);
      }
      free(intArray);
      printf("Error while allocating memory for row #%d. \n", i);
      return -1;
    }
  }

  // Initialize and print the 2D array.
  for (int i = 0; i < nRows; i++) {
    for (int j = 0; j < nCols; j++) {
      intArray[i][j] = i * nCols + j;
      printf("%d \t", intArray[i][j]);
    }
    printf("\n");
  }

  // Free the allocated memory.
  for (int i = 0; i < nRows; i++) {
    free(intArray[i]);
  }
  free(intArray);

  return 0;
}
