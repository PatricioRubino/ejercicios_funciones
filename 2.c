#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int saludar(char saludo) {
  printf("hola %s\n",saludo);
}
int main (int argc, char *argv[]) {
  char saludo = atoi(argv[1]);
  saludar("juan");
  return 0;
}
