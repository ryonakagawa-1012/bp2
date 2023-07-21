#include <handy.h>
#include <stdio.h>

#define WINDOW_X_SIZE 1000
#define WINDOW_Y_SIZE 600

int main() {
    int money[6] = {};
    int coin = 500;
    int total = 0;
    double x_text_size, y_text_size;  // 文字の大きさを取得するための変数
    int i;                            // カウンタ変数

    scanf("%d", &total);

    HgSetFont(HG_G, 25);  // フォントをゴシック体、サイズ50に設定

    HgTextSize(&x_text_size, &y_text_size, "500");

    double x_text_pos =
        (WINDOW_X_SIZE - x_text_size) / 2;  // 文字を中央に表示するための計算

    double y_text_pos =
        (WINDOW_Y_SIZE - y_text_size) / 2;  // 文字を中央に表示するための計算

    HgText(x_text_pos, y_text_pos, "500");  // 文字を表示

    for (i = 0; i < 6; i++) {
        money[i] = total / coin;
        total = total % coin;

        printf("%d:%d ", coin, money[i]);

        if (i % 2 == 0) {
            coin = coin / 5;
        } else {
            coin = coin / 2;
        }
    }

    printf("\n");

    HgGetChar();
    HgClose();

    return 0;
}