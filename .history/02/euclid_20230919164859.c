#include <stdio.h>

int main() {
    int a, b;
    int tmp;

    scanf("%d", &a);
    scanf("%d", &b);

    if (b == 0) {
        printf("%d\n", b);
        return 0;

        for (;;) {
            if (b == 0) {
                printf("%d\n", a);
                return 0;
            } else {
                tmp = b;
                b = a % b;
                a = tmp;
            }
        }
    }