/*
    消費税計算をする関数を作るプログラム
    g2354017 中川 諒
*/
#include <stdio.h>

double tax(int money, double rate) { return money * rate; }

int main() {
    int money;
    double rate;

    printf("How much?: ");
    scanf("%d", &money);

    printf("rate: ");
    scanf("%lf", &rate);

    printf("result is %0.2lf$\n", tax(money, rate));
}