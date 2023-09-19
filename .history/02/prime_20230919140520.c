#include <stdio.h>

int main() {
    int num;

    scanf("%d\n", &num);

    for (int j = 2; j <= num; j++) {
        for (int i = 2; i < j; i++) {
            if (j % i == 0) {
                printf("%d is not prime\n", j);
                break;
            } else {
                printf("%d is prime\n", j);
            }
        }
    }

    return 0;
}