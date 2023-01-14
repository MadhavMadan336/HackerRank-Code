#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  int n, i, sum=0;
  scanf("%d", &n);
  for (i=0;i<=sizeof(n);i++) 
  { 
    sum =sum+(n % 10);  
    n =n/10;
  }
  printf("%d", sum);
  return 0;
}
