#include <stdio.h>

int main() {
    int num;
    int fact = 1;
    scanf("%d", &num);
    for(int a = 1; a <= num; a = a + 1)
    {
        fact = fact*a;
    }
	printf("The factorial of the given number is: %d \n",fact);
    return 0;
}
