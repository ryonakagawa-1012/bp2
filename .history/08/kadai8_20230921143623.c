/*
    素数判定プログラム
    g2354017 中川 諒
*/
#include <stdio.h>
void prime(int num) {
    int i, j;
    int flag;

    flag = 0;
    for (i = 2; i <= num; i++) {
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d is prime\n", i);
        } else {
            printf("%d is not prime\n", i);
        }
        flag = 0;
    }
}

int main() {
    int num;

    scanf("%d", &num);
    printf("\n");

    prime(num);

    return 0;
}