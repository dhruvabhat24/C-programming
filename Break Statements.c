#include <stdio.h>

int main() {
  for (int i = 0; i <= 15 ; i = i+1) {
    if (i == 13 ) {
      break ;
    }
    printf("%d \n", i);
  } 
  return 0;
}
