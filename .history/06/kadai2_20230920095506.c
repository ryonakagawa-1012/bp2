#include <stdio.h>
#include <string.h>

int main() {
    char outStr[] = "";
    char inStr[] = "";

    scanf("%s", &inStr);

    if (inStr == "end") {
        printf("%c", outStr);
    } else {
        strcat(outStr, inStr);
    }
}