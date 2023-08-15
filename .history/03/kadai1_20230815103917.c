#include <stdio.h>

int main() {
    int i;
    int data[5];
    for (i = 0; i < 5; i++) {
        scanf("%d", &data[i]);
    }
    for (i = 0; i < 5; i++) {
        printf("data%d : %d\n", i + 1, data[i]);
    }
}