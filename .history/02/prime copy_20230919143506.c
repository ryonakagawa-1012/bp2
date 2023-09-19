#include <stdio.h>

int main() {
    int i, j, num;
    int flag;

    scanf("%d", &num);

    flag = 0;
    for (i = 2; i <= num; i++) {
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d ", i);
        }
        flag = 0;
    }
    printf("\n");
    return 0;
}