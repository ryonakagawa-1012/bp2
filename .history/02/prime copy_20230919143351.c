/*「2から入力値Xまでの全ての数」について素数判定を行い、その結果を表示するプログラム*/

#include <stdio.h>

int mai(void) {
    int i, j, x;
    int flag;

    printf("整数を入力してください：");
    scanf("%d", &x);

    flag = 0;
    for (i = 2; i <= x; i++) {
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