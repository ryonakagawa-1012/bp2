#include <handy.h>
#include <stdio.h>

int main() {
    char string[100];
    int length;

    printf("input string >> ");
    scanf("%s", string);

    while (string[length] != '\0') {
        length++;
    }

    HgOpen(400.0, 400.0);

    HgText(50, 50, string);

    HgSetFont(HG_M, 50);

    HgGetChar();
    HgClose();
}