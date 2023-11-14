#include <stdio.h>

int main(int argc, const char* argv[]){

  char *stringArray[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

  for (int i = 0; i < 12; i++)
    printf("#%d month is %s. \n", i+1, stringArray[i]);

  return 0;
}
