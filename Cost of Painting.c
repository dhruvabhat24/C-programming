#include <stdio.h>

int main() {

  int s = 14 ;

  int area = s * s ;

  int cost = area * 7 ;

  printf("%d \n", area );   //Area and cost have to be output on separate lines

  printf("%d", cost );      //'$' has to be printed after cost without any space

  printf("$"); 

  return 0;

}
