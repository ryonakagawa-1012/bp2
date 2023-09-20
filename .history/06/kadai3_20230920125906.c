#include <stdio.h>
#include <string.h>

int main() {
    char outStr[100] = "";
    char inStr[100];
    char end[] = "end";
    size_t byte;

    printf("string >> ");
    scanf("%s", inStr);

    while (strcmp(inStr, end) != 0) {
        if (strlen(outStr) >= 20) {
            printf("# %s #\n", outStr);
        }
        sprintf(outStr, " %s", inStr);

        printf("string >> ");
        scanf("%s", inStr);
    }

    printf("#back.#\n");
}