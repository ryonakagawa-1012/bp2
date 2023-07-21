#include <stdio.h>

int main() {
    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) {
        printf(" leap");
    }
}