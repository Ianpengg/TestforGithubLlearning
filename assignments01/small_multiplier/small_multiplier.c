#include <stdio.h>

int main() {
  int a, b;
  int a1, a0, b1, b0;
  int c3, c2, c1, c0;

  scanf("%d %d", &a, &b);

  a1 = a / 10;
  a0 = a % 10;
  b1 = b / 10;
  b0 = b % 10;

  c0 = a0 && b0;
  c1 = (a1 && b0) ^ (a0 && b1);
  c2 = ((a1 && b0) && (a0 && b1)) ^ (a1 && b1);
  c3 = ((a1 && b0) && (a0 && b1)) && (a1 && b1);
  printf("%d%d%d%d", c3, c2, c1, c0);
  return 0;
}
