/*
    入力した二数のうち、より大きな方を表示するプログラム
    g2354017 中川 諒
*/
#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("answer: %d\n", num1);
    } else {
        printf("answer: %d\n", num2);
    }

    return 0;
}