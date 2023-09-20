#include <stdio.h>
#include <string.h>

int main() {
    char outStr[] = "";
    char inStr[] = "";

    scanf("%s", &inStr);

    while (inStr == "end") {
        strcat(outStr, inStr);
    }
    printf("%c", outStr);
}