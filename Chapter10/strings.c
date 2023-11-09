#include <stdio.h>

int main(int argc, const char *argv[]){
  
  char loveNote[9] = "I love C";

  printf("1234567890123456789012345\n");
  printf("%s", loveNote);
  printf(".\n");
  printf("%20s", loveNote);
  printf(".\n");
  printf("%-20s", loveNote);
  printf(".\n");
  printf("%.6s", loveNote);
  printf(".\n");
  printf("%20.6s", loveNote);
  printf(".\n");
  printf("%-20.6s", loveNote);
  printf(".\n");

  return 0;
}
