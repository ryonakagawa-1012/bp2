/*
    二つの数を入力として受けて勝敗判定をする
    一つ目は「自分の手」、二つ目は「相手の手」
    1: グー 2: チョキ 3: パー
    勝ち負けは “win”, “lose”, “even” で表示する
    g2354017 中川 諒
*/

#include <stdio.h>

#define LOCK 1
#define SCISSOR 2
#define PARPER 3

int main() {
    int my_hand, enemy_hand, result;

    scanf("%d", &my_hand);

    scanf("%d", &enemy_hand);

    result = my_hand - enemy_hand;

    if (result == 0) {
        printf("even\n");
    } else if (result == -1 || result == 2) {
        printf("win\n");
    } else {
        printf("lose\n");
    }

    return 0;
}