#include <stdio.h>

int main() {
  double km;
  int mile;
  scanf("%d", &mile);
  km = 1.60 * mile ;  
  printf("%0.2f Kilometers", km  );
  return 0;
}
