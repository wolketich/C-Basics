#include <stdio.h>

int main(int argc, const char *argv[]){

  char firstName[21] = "";

  printf("What is your name: ");
  scanf("%s", firstName);

  printf("Hello, ");
  puts(firstName);

  return 0;
}
