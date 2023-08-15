#include <stdio.h>

int main() {
    int i;
    int data[5], max = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &data[i]);
    }

    for (i = 0; i < 5; i++) {
        if (max < data[i]) {
            max = data[i];
        }
    }

    return 0;
}