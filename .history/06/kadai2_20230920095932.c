#include <stdio.h>
#include <string.h>

int main() {
    char outStr[] = "";
    char inStr[] = "";

    while (inStr == "end") {
        strcat(outStr, inStr);
        scanf("%s", &inStr);
    }

    printf("%c", outStr);
}