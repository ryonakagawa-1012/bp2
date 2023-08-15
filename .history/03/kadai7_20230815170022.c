#include <stdio.h>

#define NUM 5

int main() {
    int i;
    int data1[NUM], data2[NUM];

    for (i = 0; i < NUM; i++) {
        scanf("%d", &data1[i]);
    }

    for (i = 0; i < NUM; i++) {
        data2[i] = data1[4 - i];
    }

    for (i = 0; i < NUM; i++) {
        printf("data[%d] : %d\n", i, data2[i]);
    }

    return 0;
}