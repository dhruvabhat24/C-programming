#include <stdio.h>

int main() {
  int a;
  int b;
  int c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  if (a > c) {
    printf("Bravo! \n");
   } else {
     printf("Try Again \n");
   }
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  if (a > c) {
    printf("Bravo! \n");
   } else {
    printf("Try Again \n");
   }
  return 0;
}
