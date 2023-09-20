/*
    入力した文字列を一文字ずつに分解して、斜めに描画するプログラム
*/
#include <handy.h>
#include <stdio.h>

int main() {
    char string[100];
    char tmp[2] = "";
    int length = 0;

    printf("input string >> ");
    scanf("%s", string);

    while (string[length] != '\0') {
        length++;
    }

    HgOpen(400.0, 400.0);

    HgSetFont(HG_M, 50);

    for (int i = 1; i < length; i++) {
        tmp[0] = string[i - 1];
        tmp[1] = '\0';

        HgText(50 * i, 50 * i, tmp);
    }

    HgGetChar();
    HgClose();
}