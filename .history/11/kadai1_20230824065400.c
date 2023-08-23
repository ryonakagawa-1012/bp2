#include <stdio.h>

typedef struct {
    char name[32];  // 名前
    double height;  // 身長
    double weight;  // 体重
} Person;

int main() {
    Person bob = {"bob", 170.0, 60.0};
    printf("%10s %5.1f\n", bob.name, bob.height, bob.weight);

    return 0;
}