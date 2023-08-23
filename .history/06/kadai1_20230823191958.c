#include <stdio.h>

int main() {
    char string[100];
    int length = 0;
    int Alpha = 0, Number = 0, Else = 0;

    scanf("%s", string);

    while (string[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length; i++) {
        if ((string[i] >= 'A' && string[i] <= 'Z') ||
            (string[i] >= 'a' && string[i] <= 'z')) {
            Alpha++;
        } else if (string[i] >= '0' && string[i] <= '9') {
            Number++;
        } else {
            Else++;
        }
    }

    printf("Alpha=%d Number=%d Else=%d", Alpha, Number, Else);

    return 0;
}