#include <stdio.h>

int leap(int year) {
    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int year;
    int Flag;

    scanf("%d", &year);
    printf("%d", year);

    return 0;
}