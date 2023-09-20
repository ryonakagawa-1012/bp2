/**/
#include <stdio.h>

int cmp(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("Higher: %d\n", cmp(num1, num2));

    return 0;
}