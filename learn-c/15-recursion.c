#include <stdio.h>

/* define your function here (don't forget to declare it) */

int factorial(unsigned int x) {
    if (x == 0) {
        return 1;
    }
    else {
        return x * factorial(x - 1);
    }
}

int main() {
    /* testing code */
    printf("0! = %i\n", factorial(0));
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));
}
