#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i, j;
    int** pnumbers;

    if (argc != 2) {
        printf("Usage:\n");
        printf("%s <rows number>", argv[0]);
        printf("\n");

        return 1;
    }

    int len = atoi(argv[1]);

    pnumbers = (int**)malloc(len * sizeof(int*));

    for (int i = 0; i < len; i++) {
        pnumbers[i] = (int*)malloc(sizeof(int) * i);
    }

    for (i = 0; i < len; i++) {
        for (j = 0; j <= i; j++) {
            if (i == j || j == 0) {
                pnumbers[i][j] = 1;
            }
            else {
                pnumbers[i][j] = pnumbers[i - 1][j] + pnumbers[i - 1][j - 1];
            }
        }
    }

    for (i = 0; i < len; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", pnumbers[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < len; i++) {
        free(pnumbers[i]);
    }

    free(pnumbers);

    return 0;
}