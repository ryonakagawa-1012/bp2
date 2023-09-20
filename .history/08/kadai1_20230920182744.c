/*
    二数の階乗の和を表示する処理
    g2354017 中川 諒
*/
#include <stdio.h>
int factorial(int n) {
    int i, f;
    f = n;

    for (i = n - 1; i > 1; i--) {
        f *= i;
    }
    return f;
}

int main() {
    int n1, n2, fac;

    printf("n1=");
    scanf("%d", &n1);

    printf("n2=");
    scanf("%d", &n2);

    fac = factorial(n1) + factorial(n2);

    printf("factorial = %d\n", fac);

    return 0;
}