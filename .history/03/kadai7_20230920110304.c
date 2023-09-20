/*
    最大値以外のものだけを移すプログラム
    g2354017 中川 諒
*/

#include <stdio.h>

#define NUM 5

int main() {
    int i, j = 0;
    int max;
    int data1[NUM], data2[NUM];

    for (i = 0; i < NUM; i++) {
        scanf("%d", &data1[i]);
    }

    for (i = 0; i < NUM; i++) {
        if (i == 0) {
            max = data1[0];
        } else if (max <= data1[i]) {
            max = data1[i];
        }
    }

    for (i = 0; i < NUM; i++) {
        if (max > data1[i]) {
            data2[j] = data1[i];
            j++;
        }
    }

    printf("max : %d\n", max);

    for (i = 0; i < j; i++) {
        printf("data[%d] : %d\n", i, data2[j - i - 1]);
    }

    printf("\n");

    return 0;
}