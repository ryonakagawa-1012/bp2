#include <stdio.h>

int main() {
    int i;
    int data[5], max, MaxCount;

    for (i = 0; i < 5; i++) {
        scanf("%d", &data[i]);
    }

    for (i = 0; i < 5; i++) {
        if (i == 0) {
            max = data[0];
        } else if (max < data[i]) {
            max = data[i];
        } else if (max == data[i]) {
            MaxCount++;
        }
    }

    printf("max : %d (%d個)\n", max, MaxCount);

    return 0;
}