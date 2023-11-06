#include <stdio.h>

int main(int argc, char *argv[]){

  float richterValue;

  printf("Plese enter the value, based of Richter Scale: ");
  scanf("%f", &richterValue);

  if (richterValue < 4)
    printf("Little.\n");
  else if (richterValue >= 4 && richterValue < 5)
    printf("Windows shake.\n");
  else if (richterValue >=5 && richterValue < 6)
    printf("Walls crack; poorly built buildings are damaged.\n");
  else if (richterValue >=6 && richterValue < 7)
    printf("Chimneys tumble; ordinary buildings are damaged.\n");
  else if (richterValue >=7 && richterValue < 8)
    printf("Underground pipes break; well-built building are damaged.\n");
  else 
    printf("Ground rises and falls in waves; most buildings are destroyed.\n");

  return 0;
}
