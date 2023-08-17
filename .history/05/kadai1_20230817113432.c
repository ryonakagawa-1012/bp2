#include <stdio.h>

int main() {
    int data[3][5];
    int i, j, sum1, sum2;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &data[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        sum1 = 0;
        for (j = 0; j < 5; j++) {
            printf(" %2d", data[i][j]);
            sum1 += data[i][j];
        }
        printf(" : %2d\n", sum1);
    }

    for (j = 0; j < 5; j++) {
        sum2 = 0;
        for (i = 0; i < 3; i++) {
            sum2 += data[i][j];
        }
        printf(" %2d\n", sum2);
    }

    return 0;
}