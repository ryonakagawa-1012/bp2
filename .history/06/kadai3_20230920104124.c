#include <stdio.h>
#include <string.h>

int main() {
    char outStr[100] = "";
    char inStr[100];
    char end[] = "end";
    size_t byte;

    scanf("%s", inStr);

    while (strcmp(inStr, end) != 0) {
        if (strlen(outStr) >= 20) {
            printf("# %s #", outStr);
        }
        sprintf(outStr, " %s", inStr);
        scanf("%s", inStr);

        printf("string >> %s", inStr);
    }

    printf("");
}