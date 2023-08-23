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

    /*回転前表示*/
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
    /*ここまで*/

    /*回転操作*/

    matrix[1][1] = matrix2[1][1];

    for (int i = 0; i < 2; i++) {
        matrix[i][0] = matrix2[i + 1][0];
        matrix[i][2] = matrix2
    }

    /*ここまで*/

    /*回転後表示*/
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
    /*ここまで*/

    return 0;
}