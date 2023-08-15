#include <stdio.h>

int main() {
    int i;
    int data[5], max;
    int noneFlag;

    for (i = 0; i < 5; i++) {
        scanf("%d", &data[i]);
    }

    for (i = 0; i < 5; i++) {
        if (i == 0) {
            max = data[0];
        } else if (max < data[i]) {
            max = data[i];
        } else if (max == data[i]) {
            noneFlag++;
        }
    }

    printf("max : %d\n", max);
    printf("others :");

    for (i = 0; i < 5; i++) {
        if (max > data[i]) {
            printf(" %d", data[i]);
        }
    }

    if (noneFlag == 5) {
        printf("none");
    }

    printf("\n");

    printf("\n");

    return 0;
}