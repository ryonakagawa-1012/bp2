#include <stdio.h>

int main() {
    int num1, num2, num3;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if (num1 > num2) {
        if (num1 > num3) {
            printf("answer: %d\n", num1);
        } else {
            printf("answer: %d\n", num3);
        }
    }

    return 0;
}