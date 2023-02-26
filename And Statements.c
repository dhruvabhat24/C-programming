#include <stdio.h>

int main() {
  int a;
  int b;
  a = 15;
  b = 35;
  if (a%7 == 0 && a%5 == 0 ) {
    printf("The number is divisible by both 5 & 7 \n");
    }  
    else {
    printf("The number is not divisible by both 5 & 7 \n");
    }

    if (b%7 == 0 && b%5 == 0 ) {
    printf("The number is divisible by both 5 & 7 \n");
    }  
    else {
    printf("The number is not divisible by both 5 & 7 \n");
    }
  return 0;
}
