#include <stdio.h>

int main(){
  int i, j, k, l;
  scanf("%d", &i);
  j = i / 100; 
  k = i % 100 / 10;
  l = i % 100 % 10;
  printf("%d\n", j + k + l);
  return 0;
}