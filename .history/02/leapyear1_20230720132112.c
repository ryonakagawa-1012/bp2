#include <stdio.h>

int main() {
    int year;

    scanf("%d", &year);
    printf("%d ", year);

    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) {
        printf(" leap\n");
    } else {
        printf("\n");
    }

    return 0;
}