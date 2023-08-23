#include <stdio.h>

#define SIZE 3

int main() {
    int card[SIZE][SIZE];
    int x, y;
    int BingoNum1, BingoNum2, BingoNum3, BingoNum4, BingoNum5;
    int BingoFlag = 0;

    for (y = 0; y < SIZE; y++) {
        for (x = 0; x < SIZE; x++) {
            scanf("%d", &card[x][y]);
        }
    }

    scanf("%d %d %d %d %d", &BingoNum1, &BingoNum2, &BingoNum3, &BingoNum4,
          &BingoNum5);

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

    /*穴に変換*/
    for (y = 0; y < SIZE; y++) {
        for (x = 0; x < SIZE; x++) {
            if (card[x][y] == BingoNum1 || card[x][y] == BingoNum2 ||
                card[x][y] == BingoNum3 || card[x][y] == BingoNum4 ||
                card[x][y] == BingoNum5) {
                card[x][y] = 0;
            }
        }
    }
    /*ここまで*/

    /*穴表示*/
    for (y = 0; y < SIZE; y++) {
        for (x = 0; x < SIZE; x++) {
            if (card[x][y] == 0) {
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
            if (card[x][y] == 0) {
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
            if (card[x][y] == 0) {
                BingoFlag++;
            } else {
                BingoFlag = 0;
                break;
            }
        }
    }
    /*ここまで*/

    /*斜め方向判定*/
    if (card[1][1] == 0) {
    }

    /*ここまで*/

    /*ビンゴ判定*/
    if (BingoFlag >= 3) {
        printf("Bingo\n");
    }
    /*ここまで*/

    return 0;
}
