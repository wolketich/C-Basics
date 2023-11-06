
#include <stdio.h>

int main(int argc, char *argv[]) {

  for (int i = 1; i <= 10; i++) {
    if (i == 10)
      printf("%d", i);
    else
      printf("%d, ", i);
  }
     putchar('\n');

  return 0;
}
