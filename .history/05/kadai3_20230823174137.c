#include <stdio.h>

#define SIZE 3

int main() {
    int matrix[SIZE][SIZE];
    int matrix2[SIZE][SIZE];
    int x, y;

    for (y = 0; y < SIZE; y++) {
        for (x = 0; x < SIZE; x++) {
            scanf("%d", &matrix[x][y]);
        }
    }

    printf("before\n");
    for (y = 0; y < SIZE; y++) {
        for (x = 0; x < SIZE; x++) {
            if (matrix[x][y] == 0)
                printf("□ ");
            else
                printf("■ ");
        }
        printf("\n");
    }

    for (i = 0; i < 1; i++) {
    }

    printf("after\n");
    for (y = 0; y < SIZE; y++) {
        for (x = 0; x < SIZE; x++) {
            if (matrix2[x][y] == 0)
                printf("□ ");
            else
                printf("■ ");
        }
        printf("\n");
    }

    return 0;
}