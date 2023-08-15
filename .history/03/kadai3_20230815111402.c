#include <stdio.h>

int main() {
    int i;
    int data[5], max;

    for (i = 0; i < 5; i++) {
        scanf("%d", &data[i]);
    }

    for (i = 0; i < 5; i++) {
        if (max < data[i]) {
            max = data[i];
        } else
    }

    printf("max : %d\n", max);

    return 0;
}