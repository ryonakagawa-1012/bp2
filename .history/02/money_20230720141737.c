#include <stdio.h>

int main() {
    int money[6] = {};
    int coin = 500;
    int total = 0;
    int i;

    scanf("%d", &total);

    for (i = 0; i < 6; i++) {
        money[i] = total / coin;
        total = total % coin;

        printf()

            if (i % 2 == 0) {
            coin = coin / 5;
        }
        else {
            coin = coin / 2;
        }
    }

    return 0;
}