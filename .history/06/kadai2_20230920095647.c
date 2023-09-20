#include <stdio.h>
#include <string.h>

int main() {
    char outStr[] = "";
    char inStr[] = "";

    while (inStr == "end") {
        scanf("%s", &inStr);

        strcat(outStr, inStr);
    }

    printf("%c", outStr);
}