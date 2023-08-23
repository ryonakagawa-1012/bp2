#include <stdio.h>

typedef struct {
    char name[32];  // 名前
    double height;  // 身長
    double weight;  // 体重
} Person;

double bmi(Person p) { return p.weight / (p.height * p.height); };

int main() {
    Person bob = {"bob", 170.0, 60.0};

    return 0;
}