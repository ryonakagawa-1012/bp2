#include <stdio.h>

int main() {
    int num;
    int Flag;
    int i, j;

    scanf("%d", &num);

    for (j = 2; j <= num; j++) {
        for (i = 2; i < j; i++) {
            if (j % i == 0) {
                printf("%d is not prime\n", j);
                break;
            } else {
                Flag++;
            }
        }
        printf("%d is prime\n", j);
    }

    return 0;
}