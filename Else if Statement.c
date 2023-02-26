#include <stdio.h>

int main() {
  int r ;
  int b ;
  r = 45;
  b = 23;
  if ( r > b ) {
    printf("Rob Scored higher marks than Bob. \n");
   } else if ( r == b) {
     printf("Bob & Rob both scored the same");
   }
   r = 15;
   b = 15;
  if ( r > b ) {
    printf("Rob Scored higher marks than Bob. \n");
   } else if ( r == b) {
     printf("Bob & Rob both scored the same");
   }
  return 0;
}
