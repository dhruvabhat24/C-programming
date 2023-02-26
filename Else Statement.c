#include <stdio.h>

int main() {
  int r;
  int k;
  r = 24;
  k = 32;
  if (r > k) {
    printf("Ram is heavier than Karan. \n");
   } else if ( r < k) {
     printf("Karan is heavier than Ram \n");
   }
    else {
      printf("Ram & Karan have the same weight! \n");
   }
  r = 78;
  k = 78;
  if (r > k) {
    printf("Ram is heavier than Karan. \n");
   } else if ( r < k) {
     printf("Karan is heavier than Ram \n");
   }
    else {
      printf("Ram & Karan have the same weight! \n");
   }
  return 0;
}
