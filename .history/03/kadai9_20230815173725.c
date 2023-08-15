#include <stdio.h>

#define NUM 5

int main() {
    int i, j;
    int max;
    int data1[NUM], data2[100] = {};

    for (i = 0; i < NUM; i++) {
        scanf("%d", &data1[i]);
    }

    for (i = 0; i < NUM; i++) {
        data2[data1[i]]++;
    }

    for (i = 0; i < 100; i++) {
        if (data2[i] != 0) {
            for (j = 0; j < data2[i]; j++) {
                printf("%d ", i);
            }
        }
    }

    printf("\n");

    return 0;
}