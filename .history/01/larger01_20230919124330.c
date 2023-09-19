#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("answer: %d", num1);
    } else {
        printf("answer: %d", num2);
    }

    return 0;
}