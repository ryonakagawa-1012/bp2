#include <stdio.h>

#define SIZE 3

int main() {
    int matrix[SIZE][SIZE] = {};
    int matrix2[SIZE][SIZE] = {};
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
        // 横方向
        matrix[i][0] = matrix2[i + 1][0];
        matrix[2 - i][2] = matrix2[1 - i][2];
        // 縦方向
        matrix[2][i] = matrix2[2][i + 1];
        matrix[0][2 - i] = matrix2[0][1 - i];
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