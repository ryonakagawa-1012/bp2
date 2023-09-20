#include <stdio.h>
#include <string.h>

int main() {
    char outStr[100] = "";
    char inStr[100];
    char end[] = "end";

    printf("string >> ");
    scanf("%s", inStr);

    while (strcmp(inStr, end) != 0) {
        if (strlen(outStr) + strlen(inStr) >= 20) {
            printf("# %s #\n", outStr);

            for (int i = 0; i < 100; i++) {
                outStr[i] = "\0";
            }
        }

        sprintf(outStr, "%s %s", outStr, inStr);

        printf("string >> ");
        scanf("%s", inStr);
    }

    printf("#back.#\n");
}