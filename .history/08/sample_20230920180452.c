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
    int n, fac;
    printf("n=");
    scanf("%d", &n);
    fac = factorial(n);
    printf("factorial = %d\n", fac);
    return 0;
}