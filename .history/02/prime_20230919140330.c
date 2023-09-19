#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);
    for (size_t i = 0; i < count; i++) {
        /* code */

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                printf("%d is not prime\n", num);
                break;
            } else {
                printf("%d is prime\n", num);
            }
        }
    }

    return 0;
}