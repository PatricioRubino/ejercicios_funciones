#include <stdio.h>
#include <stdlib.h>

int print_array(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d \n",a[i]);
  }
  printf("\n" );
}
int main (void) {
  int array[] = {1,2,3,4,5,6,7,8,9};
  print_array  (array,9);
  return 0;
}
