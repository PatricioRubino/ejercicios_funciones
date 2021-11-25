#include <stdio.h>
#include <stdlib.h>

void caracteres(char *a) {
  int i = 0;
  while (a[i]) {
    printf("%c ",a[i]);
    i++;
  }
  printf(" tiene %d caracteres\n",i);
}
int main(int argc, char *argv[]) {
  caracteres(argv[1]);
  return 0;
}
