/*
    二数の階乗の和を表示する処理
    g2354017 中川 諒
*/
#include <stdio.h>
int factorial(int n1, int n2) {
    int i, f1, f2;
    f1 = n1;

    for (i = n1 - 1; i > 1; i--) {
        f1 *= i;
    }

    for (i = n2 - 1; i > 1; i--) {
        f2 *= i;
    }

    return f2;
}

int main() {
    int n1, n2, fac;

    printf("n1=");
    scanf("%d", &n1);

    printf("n2=");
    scanf("%d", &n2);

    fac = factorial(n1, n2);

    printf("factorial = %d\n", fac);

    return 0;
}