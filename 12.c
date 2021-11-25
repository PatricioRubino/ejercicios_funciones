#include <stdio.h>
#include <stdlib.h>

void array_max (int array[]) {
  int min = 99999;
  for (int i = 0; i < 5; i++) {
    if (array[i]<min)min=array[i];
  }
  printf("%d\n",min );
}
int main (void) {
  int lista[] = {1,2,3,4,5};
  array_max(lista);
  return 0;
}
