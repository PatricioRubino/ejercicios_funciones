#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool palindromo (char a[]) {
  bool espalindromo=true;
  int length = 0;
while (a[length] != 0) length++;
for (int i = 0; i < length/2; i++) {
  if (!(a[i] == a[length-i-1])) {
    espalindromo = false;
  }
}
if (espalindromo) {
  return true;
} else return false;
}
int main(int argc, char *argv[]) {
  printf("%d\n",palindromo(argv[1]));
  return 0;
}
