/*
    二つの数を入力として受けて勝敗判定をする
    一つ目は「自分の手」、二つ目は「相手の手」
    1: グー 2: チョキ 3: パー
    勝ち負けは “win”, “lose”, “even” で表示する
*/

#include <stdio.h>

#define LOCK 1
#define SCISSOR 2
#define PARPER 3

int main() {
    int my_hand, enemy_hand;

    scanf("%d", &my_hand);

    scanf("%d", &enemy_hand);

    return 0;
}