/*
    二数の階乗の和を表示する処理
    g2354017 中川 諒
*/
#include <stdio.h>
int factorial(int n1, int n2) {
    int i, f1;
    f1 = n;

    for (i = n - 1; i > 1; i--) {
        f 1 *= i;
    }
    return f1;
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