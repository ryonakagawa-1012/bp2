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

    /*横方向*/
    for (x = 0; x < 2; x++) {
    }
    /*ここまで*/

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