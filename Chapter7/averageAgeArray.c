#include <stdio.h>

int main(int argc, char *argv[]){
  
  int ages[10];
  int index;
  int totalAge = 0;

  printf("Please enter age of ten people: \n");
  for (int index = 0; index < 10; index++){
    printf("Enter age for person no. %d: ", index+1);
    scanf("%d", &ages[index]);
    totalAge += ages[index];
  }

  printf("Average age of this group of 10 people is equal to %f. \n", totalAge / 10.0);
  
  return 0;
}
