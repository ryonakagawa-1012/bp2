#include <stdio.h>
#include <string.h>

int main() {
    char outStr[100] = "";
    char inStr[100];
    char end[] = "end";

    while (strcmp(inStr, end) == 0) {
        strcat(outStr, inStr);
        scanf("%s", inStr);
    }

    printf("%s", outStr);
}