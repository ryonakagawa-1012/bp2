#include <stdio.h>
#include <string.h>

int main() {
    char outStr[100] = "";
    char inStr[100];

    while (inStr == "end\0") {
        strcat(outStr, inStr);
        scanf("%s", &inStr);
    }

    printf("%s", outStr);
}