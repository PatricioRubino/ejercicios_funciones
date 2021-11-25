#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int iguales(int a, int b, int c) {
if (a == b || b == c || c == a) return 0;
else return 1;
}
int main(int argc, char *argv[]) {
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int c = atoi(argv[3]);
printf("%d\n",iguales(a,b,c));
return 0;
}
