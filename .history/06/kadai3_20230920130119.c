#include <stdio.h>
#include <string.h>

int main() {
    char outStr[100] = "";
    char inStr[100];
    char end[] = "end";
    int num;
    size_t byte;

    printf("string >> ");
    scanf("%s", inStr);

    while (strcmp(inStr, end) != 0) {
        num = strlen(outStr);
        printf("num: %d\n", num);
        if (strlen(outStr) >= 20) {
            printf("# %s #\n", outStr);
        }
        sprintf(outStr, " %s", inStr);

        printf("string >> ");
        scanf("%s", inStr);
    }

    printf("#back.#\n");
}