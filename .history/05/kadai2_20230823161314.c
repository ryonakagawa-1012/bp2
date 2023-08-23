#include <stdio.h>

#define SIZE 3

int main() {
    int card[SIZE][SIZE];
    int x, y;
    int BingoFlag = 0;

    for (y = 0; y < SIZE; y++) {
        for (x = 0; x < SIZE; x++) {
            scanf("%d", &card[x][y]);
        }
    }
    printf(" -- -- --\n");

    /*数字表示*/
    for (y = 0; y < SIZE; y++) {
        for (x = 0; x < SIZE; x++) {
            printf(" %2d", card[x][y]);
        }
        printf("\n");
    }

    printf(" -- -- --\n");
    /*ここまで*/

    /*穴表示*/
    for (y = 0; y < SIZE; y++) {
        for (x = 0; x < SIZE; x++) {
            if (card[x][y] == 1 || card[x][y] == 2 || card[x][y] == 5 ||
                card[x][y] == 6 || card[x][y] == 7) {
                printf("  .");
            } else {
                printf(" %2d", card[x][y]);
            }
        }
        printf("\n");
    }

    printf(" -- -- --\n");
    /*ここまで*/

    /*横方向の判定*/
    for (y = 0; y < SIZE; y++) {
        for (x = 0; x < SIZE; x++) {
            if (card[x][y] == 1 || card[x][y] == 2 || card[x][y] == 5 ||
                card[x][y] == 6 || card[x][y] == 7) {
                BingoFlag++;
            } else {
                BingoFlag = 0;
                break;
            }
        }
    }
    /*ここまで*/

    /*縦方向の判定*/
    for (x = 0; x < SIZE; x++) {
        for (y = 0; y < SIZE; y++) {
            if (card[x][y] == 1 || card[x][y] == 2 || card[x][y] == 5 ||
                card[x][y] == 6 || card[x][y] == 7) {
                BingoFlag++;
            } else {
                BingoFlag = 0;
                break;
            }
        }
    }
    /*ここまで*/

    /*ビンゴ判定*/
    if (BingoFlag >= 3) {
        printf("Bingo\n");
    }
    /*ここまで*/

    return 0;
}