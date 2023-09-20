#include <stdio.h>
#include <string.h>

int main() {
    char outStr[100] = "";
    char inStr[100];
    char end[] = "end";

    printf("string >> ");
    scanf("%s", inStr);

    while (strcmp(inStr, end) != 0) {
        sprintf(outStr, "%s %s", outStr, inStr);

        if (strlen(outStr) >= 20) {
            printf("# %s #\n", outStr);
        }

        printf("string >> ");
        scanf("%s", inStr);

        if (strcmp(inStr, end) == 0) {
            printf("%lu", strlen(outStr));
        }
    }

    printf("#back.#\n");
}