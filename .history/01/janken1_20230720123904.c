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

    printf("自分の手を入力してください\n");
    scanf("%d", &my_hand);

    printf("相手の手を入力してください\n");
    scanf("%d", &enemy_hand);

    if (my_hand == enemy_hand) {
        printf("even\n");
    } else if (my_hand == LOCK && enemy_hand == SCISSOR) {
        printf("win\n");
    } else if (my_hand == SCISSOR && enemy_hand == PARPER) {
        printf("win\n");
    } else if (my_hand == PARPER && enemy_hand == LOCK) {
        printf("win\n");
    } else {
        printf("lose\n");
    }

    return 0;
}