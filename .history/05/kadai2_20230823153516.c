#include <stdio.h>

#define SIZE 3

int main() {
    int card[SIZE][SIZE];
    int x, y;

    for (y = 0; y < SIZE; y++) {
        for (x = 0; x < SIZE; x++) {
            scanf("%d", &card[x][y]);
        }
    }

    for (y = 0; y < SIZE; y++) {
        for (x = 0; x < SIZE; x++) {
            printf(" %2d", card[x][y]);
        }
        printf("\n");
    }

    printf(" -- -- --");

    return 0;
}