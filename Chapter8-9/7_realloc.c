#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {

  float *floatArray = NULL; // Represents the beginning of an array of floats
  char reply;
  int nElements = 0;

  // Allocate and initialize memory using calloc to avoid uninitialized values
  floatArray = (float*) malloc(sizeof(float));
  if (floatArray == NULL) {
    printf("Error while allocating memory.\n");
    return -1;
  }

  do {
    printf("Enter value for element #%d: ", nElements);
    // Check the return value of scanf to ensure it reads the expected number of inputs
    if (scanf("%f", &floatArray[nElements]) != 1) {
      printf("Failed to read a float value.\n");
      free(floatArray); // Free the allocated memory
      return -1;
    }
    nElements++;

    printf("Add more values? (Y or N): ");
    scanf(" %c", &reply); // Add a space before %c to skip any whitespaces

    if (reply == 'Y' || reply == 'y') {
      // Use a temporary pointer when reallocating to avoid memory leaks
      float *temp = (float*) realloc(floatArray, (nElements + 1) * sizeof(float));
      if (temp == NULL) {
        printf("Error while reallocating memory.\n");
        free(floatArray); // Free the allocated memory
        return -1;
      }
      floatArray = temp;
    }
  } while (reply == 'Y' || reply == 'y'); // Fixed the condition to check for both 'Y' and 'y'

  printf("\n ------------------------------ \n");
  printf("Printing elements of the array. \n");
  for (int i = 0; i < nElements; i++) {
    printf("Element #%d is equal to %.2f. \n", i, floatArray[i]);
  }

  free(floatArray); // Free the allocated memory before the program exits
  return 0;
}

