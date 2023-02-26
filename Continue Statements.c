#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i <= 12; i=i+1) {
    if (i == n) {
      continue;
    }
   printf("%d \n", i);
  }   
  return 0;
}
