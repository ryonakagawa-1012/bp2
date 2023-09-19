#include <stdio.h>

int main() {
    int a, b;
    int tmp;

    scanf("%d", &a);
    scanf("%d", &b);

    if (b == 0) {
        printf("%d", b);
    } else {
        tmp = b;
        b = a % b;
    }
}