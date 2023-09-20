#include <stdio.h>
#include <string.h>

int main() {
    char outStr[100] = "";
    char inStr[100];
    char end[] = "end";
    size_t byte;

    scanf("%s", inStr);

    while (strcmp(inStr, end) != 0) {
        sprintf(outStr, inStr);

        if (strlen(outStr) >= 20) {
        }
        printf("string >> %s", inStr);

        scanf("%s", inStr);
    }

    printf("%s", outStr);
}