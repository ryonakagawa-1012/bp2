#include <stdio.h>

typedef struct Person {
    char name[32];  // 名前
    double height;  // 身長
} Person;

int main() {
    Person bob = {"bob", 170.0};
    printf("%10s %5.1f\n", bob.name, bob.height);

    return 0;
}