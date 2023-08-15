#include <stdio.h>

#define NUM 5

int main() {
    int i;
    int max;
    int data1[NUM], data2[NUM];

    for (i = 0; i < NUM; i++) {
        scanf("%d", &data1[i]);
    }

    for (i = 0; i < NUM; i++) {
        if (i == 0) {
            max = data1[0];
        } else if (max < data1[i]) {
            max = data[i];
        }
    }
    for (i = 0; i < NUM; i++) {
        printf("data[%d] : %d\n", i, data2[i]);
    }

    return 0;
}