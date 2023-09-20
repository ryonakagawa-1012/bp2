/*
    三数から、最も大きいものを表示する処理
    g2354017 中川 諒
*/
#include <stdio.h>

int cmp(int num1, int num2, int num3) {
    if (num1 > num2) {
        if (num1 > num3) {
            return num1;
        } else {
            return num3;
        }
    } else {
        if (num2 > num3) {
            return num2;

        } else {
            return num3;
        }
    }
}

int main() {
    int num1, num2, num3;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    printf("Higher: %d\n", cmp(num1, num2, num3));

    return 0;
}