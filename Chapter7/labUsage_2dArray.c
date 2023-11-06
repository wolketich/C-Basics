#include <stdio.h>

int main(int argc, char *argv[]){
  int totalUsage;
  int usage[7][5];

  // Read lab's usage for each day
  for (int day = 0; day < 7; day++) {
    printf("\nEntering the usage of day #%d.\n", day+1);
    printf("-----------------------------\n");
    for (int lab = 0; lab < 5; lab++) {
      printf("Enter usage of lab #%d for day %d: ", lab+1, day+1);
      scanf("%d", &usage[day][lab]);
    }
  }

  // Calculate the average usage of every lab
  putchar('\n');
  putchar('\n');
  printf("Calculating the average laboratory usage.\n");
  printf("--------------------------------\n");
  for (int lab = 0; lab < 5; lab++){
    totalUsage = 0;
    for (int day = 0; day < 7; day++){
      totalUsage += usage[day][lab];
    }
    printf("Average usage for Lab #%d is %.2f.\n", lab + 1, totalUsage / 7.0);
  }

  return 0;
}
