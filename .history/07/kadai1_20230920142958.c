/*
    入力した文字列を一文字ずつに分解して、斜めに描画するプログラム
*/
#include <handy.h>
#include <stdio.h>

int main() {
    char string[100];
    char tmp;
    int length;

    printf("input string >> ");
    scanf("%s", string);

    while (string[length] != '\0') {
        length++;
    }

    HgOpen(400.0, 400.0);
    /*
        for (int i = 0; i < length; i++) {
            tmp = string[i];

            HgText(50 * i, 50 * i, &tmp);
        }

        HgSetFont(HG_M, 50);

        HgGetChar();
        HgClose();
        */
}