#include <stdio.h>

int main(int argc, char *argv[]){
  
  int ages[10];
  int index;
  int totalAge = 0;
  int youngest, oldest, average = 0;

  printf("Please enter age of ten people: \n");
  for (int index = 0; index < 10; index++){
    printf("Enter age for person no. %d: ", index+1);
    scanf("%d", &ages[index]);
    totalAge += ages[index];
  }
  

  youngest = ages[0];
  oldest = ages[0];
  for (int index = 0; index < 10; index++) {
    if (ages[index] > oldest)
      oldest = ages[index];
    if (ages[index] < youngest)
      youngest = ages[index];
  }

  printf("The oldest age in this group is %d. \n", oldest);
  printf("The youngest age in this group is %d. \n", youngest);
  printf("Average age of this group of 10 people is equal to %f. \n", totalAge / 10.0);
  
  return 0;
}
