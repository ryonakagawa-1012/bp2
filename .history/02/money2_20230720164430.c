#include <handy.h>
#include <stdio.h>

#define WINDOW_SIZE 600

int main() {
    int money[6] = {};
    int coin = 500;
    int total = 0;
    int x_text_size, y_text_size;
    int i;

    scanf("%d", &total);

    HgOpen(WINDOW_SIZE, WINDOW_SIZE);

    HgTextSize(*x_text_size, *y_text_size, 500 100 50 10 5 1);

    for (i = 0; i < 6; i++) {
        money[i] = total / coin;
        total = total % coin;

        printf("%d:%d ", coin, money[i]);

        if (i % 2 == 0) {
            coin = coin / 5;
        } else {
            coin = coin / 2;
        }
    }

    printf("\n");

    HgGetChar();
    HgClose();

    return 0;
}