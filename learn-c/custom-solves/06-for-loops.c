#include <stdio.h>

int main() {
    int factorial = 10;

    for (int i = factorial; i > 0;--i)
        factorial *= i;

    printf("10! is %d.\n", factorial);

    return 1;
}
