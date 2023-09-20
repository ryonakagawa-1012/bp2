#include <handy.h>
#include <stdio.h>

int main() {
    char string[100];

    printf("input string >> ");
    scanf("%s", string);

    HgSetFont()

        HgOpen(400.0, 400.0);
    HgText(100.0, 200.0, string);

    HgGetChar();
    HgClose();
}