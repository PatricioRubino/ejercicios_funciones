#include <stdio.h>
#include <stdlib.h>

void array_max(int array[]) {
    int max = 99999;
    for (int i = 0; i < 5; i++) {
      if (array[i]>max)max = array[i];
    }
    printf("%d\n",max);
}
int main (void) {
  int lista[] = {1,2,3,4,5};
  array_max(lista);
  return 0;
}
