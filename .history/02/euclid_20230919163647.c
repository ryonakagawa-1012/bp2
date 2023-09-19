#include <stdio.h>

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if (b == 0) {
        printf("%d", b);
    } else {
        b = a % b;
    }
}