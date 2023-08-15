#include <stdio.h>

#define NUM 5
#define FLAG 1

int main() {
    int i;
    int max;
    int data1[NUM], data2[100] = {};

    for (i = 0; i < NUM; i++) {
        scanf("%d", &data1[i]);
    }

    for (i = 0; i < NUM; i++) {
        data2[data1[i]] = FLAG;
    }

    return 0;
}