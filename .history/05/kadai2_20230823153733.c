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

    for (y = 0; y < SIZE; y++) {
        for (x = 0; x < SIZE; x++) {
            if (card[x][y] == 1 || card[x][y] == 2 || card[x][y] == 5 ||
                card[x][y] == 6 || card[x][y] == 7) {
                printf
            }

            printf(" %2d", card[x][y]);
        }
        printf("\n");
    }

    return 0;
}