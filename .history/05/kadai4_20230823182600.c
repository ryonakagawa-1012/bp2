#include <stdio.h>

#define SIZE 3

int main() {
    int matrix[SIZE][SIZE] = {};
    int matrix2[SIZE][SIZE] = {};
    int x, y;
    int count = 0;

    for (y = 0; y < SIZE; y++) {
        for (x = 0; x < SIZE; x++) {
            scanf("%d", &matrix[x][y]);
        }
    }
    /***ループ**

     */
    /*回転前表示*/
    printf("step %d\n", count);
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

    for (y = 0; y < SIZE; y++) {
        for (x = 0; x < SIZE; x++) {
            matrix2[SIZE - 1 - x][y] = matrix[y][x];
        }
    }

    /*
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix2[j][SIZE - 1 - i] = matrix[i][j];
        }
    }
    */

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