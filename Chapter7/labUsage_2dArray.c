#include <stdio.h>

#define DAYS_IN_WEEK 7
#define LABS 5

int main(int argc, char *argv[]){
  int totalUsage = 0;
  int usage[DAYS_IN_WEEK][LABS] = {0}; // Initialize all elements to 0

  // Read lab's usage for each day
  for (int day = 0; day < DAYS_IN_WEEK; day++) {
    printf("\nEntering the usage of day #%d.\n", day + 1);
    printf("-----------------------------\n");
    for (int lab = 0; lab < LABS; lab++) {
      printf("Enter usage of lab #%d for day %d: ", lab + 1, day + 1);
      if (scanf("%d", &usage[day][lab]) != 1) {
        // Handle input error
        fprintf(stderr, "Error reading input for lab %d, day %d\n", lab + 1, day + 1);
        return 1;
      }
    }
  }

  // Calculate the average usage of every lab
  putchar('\n');
  printf("Calculating the average laboratory usage.\n");
  printf("----------------------------------------\n");
  for (int lab = 0; lab < LABS; lab++){
    totalUsage = 0; // Reset to 0 for each lab
    for (int day = 0; day < DAYS_IN_WEEK; day++){
      totalUsage += usage[day][lab];
    }
    printf("Average usage for Lab #%d is %.2f.\n", lab + 1, (float)totalUsage / DAYS_IN_WEEK);
  }

  return 0;
}
