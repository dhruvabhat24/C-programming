#include <stdio.h>

int main() {
  int z;
  int x;
  int c;
  scanf("%d", &z);
  scanf("%d", &x);
  scanf("%d", &c);
  if (c > x || c > z ) {
    printf("PASS \n");
    }  
    else {
    printf("FAIL \n");
    }

  scanf("%d", &z);
  scanf("%d", &x);
  scanf("%d", &c);
  if (c > x || c > z ) {
    printf("PASS \n");
    }  
    else {
    printf("FAIL \n");
    }
  return 0;
}
