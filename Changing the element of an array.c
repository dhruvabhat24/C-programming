#include <stdio.h>

int main() {
  char *mnts[4] = {"Jan", "Feb", " Dec", "Apr"};
  mnts[ 2 ] = "Mar";
  printf("%s", mnts[2]);
 
  return 0;
