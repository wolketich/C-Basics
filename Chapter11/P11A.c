#include <stdio.h>

int main(int argc, const char* argv[]){

  void stars(void);
  char *text = "some text";

  stars();
  putchar('\n');
  putchar('*');
  printf(text);
  putchar('*');
  putchar('\n');
  stars();
  putchar('\n');

  return 0;
}

void stars() {
  for (int counter = 0; counter < 11; counter++)
    putchar('*');
}
