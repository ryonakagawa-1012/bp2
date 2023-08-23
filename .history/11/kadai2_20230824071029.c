#include <stdio.h>

typedef struct {
    char name[32];  // 名前
    double height;  // 身長
    double weight;  // 体重
} Person;

double get_bmi(Person p) { return p.weight / (p.height * p.height); };

int main() {
    Person bob = {"bob", 170.0, 60.0};

    double bmi = get_bmi(bob);

    printf("%10s %5.1f %5.1f %5.1f\n", bob.name, bob.height, bob.weight, bmi);

    return 0;
}