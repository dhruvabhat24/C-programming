#include <stdio.h>

int main() {
  int length = 11;
  int width = 13;
  printf("%d \n", length * width);
  printf("%d \n", 2*(length+width));
  width = 15 ; //Replace the _ with the correct value.
  printf("%d \n", length * width);
  printf("%d", 2*(length+width));
  
  return 0;
}
