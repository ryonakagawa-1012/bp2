#include <stdio.h>

int main() {
    int money[6] = {};
    int total = 0;
    int i;

    scanf("%d", &total);

    for (i = 0; i < 6; i++) {
        money[i] = total % (1000 / 5);
    }

    return 0;
}