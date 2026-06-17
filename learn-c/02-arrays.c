#include <stdio.h>

int main() {
    int average;
    
    // The code below does not compile, because the grades variable is missing.
    int grades[3];

    grades[0] = 80;
    grades[2] = 90;

    // One of the grades is missing. Can you define it so the grade average will be 85?
    grades[1] = 85 * 3 - grades[0] - grades[2]; // Lazy ;p

    average = (grades[0] + grades[1] + grades[2]) / 3;
    printf("The average of the 3 grades is: %d", average);

    return 0;
}