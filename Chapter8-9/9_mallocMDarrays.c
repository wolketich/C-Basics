#include <stdio.h>
#include <stdlib.h>

int main() {
  int nCols, nRows, nItems;
  int ***intArray; // Array of pointers to a pointer to a pointer.

  printf("Enter number of rows: ");
  scanf("%d", &nRows);

  printf("Enter number of columns: ");
  scanf("%d", &nCols);

  printf("Enter number of items per column: ");
  scanf("%d", &nItems);

  // Allocate memory for the array of rows of pointers to pointers.
  intArray = (int***) malloc(nRows * sizeof(int**));
  if (intArray == NULL) {
    printf("Error while allocating memory for rows. \n");
    return -1;
  }

  // Allocate memory for each array of column pointers.
  for (int i = 0; i < nRows; i++) {
    intArray[i] = (int **) malloc(nCols * sizeof(int*));
    if (intArray[i] == NULL) {
      // Free all previously allocated memory for rows before returning.
      for (int j = 0; j < i; j++) {
        free(intArray[j]);
      }
      free(intArray);
      printf("Error while allocating memory for columns in row #%d. \n", i);
      return -1;
    }
    // Allocate memory for each item.
    for (int j = 0; j < nCols; j++) {
      intArray[i][j] = (int *) malloc(nItems * sizeof(int));
      if (intArray[i][j] == NULL) {
        // Free all previously allocated memory for columns and rows before returning.
        for (int k = 0; k < j; k++) {
          free(intArray[i][k]);
        }
        while (--i >= 0) {
          for (int l = 0; l < nCols; l++) {
            free(intArray[i][l]);
          }
          free(intArray[i]);
        }
        free(intArray);
        printf("Error while allocating memory for items in column #%d of row #%d. \n", j, i);
        return -1;
      }
    }
  }

  // Initialize and print the 3D array.
  for (int i = 0; i < nRows; i++) {
    for (int j = 0; j < nCols; j++) {
      for (int k = 0; k < nItems; k++) {
        intArray[i][j][k] = i * nCols * nItems + j * nItems + k;
        printf("%d \t", intArray[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }

  // Free the allocated memory for items, columns, and rows.
  for (int i = 0; i < nRows; i++) {
    for (int j = 0; j < nCols; j++) {
      free(intArray[i][j]);
    }
    free(intArray[i]);
  }
  free(intArray);

  return 0;
}
