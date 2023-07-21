#include <handy.h>
#include <stdio.h>

#define WINDOW_X_SIZE 1000
#define WINDOW_Y_SIZE 600

int main() {
    int money[6] = {};
    int coin = 500;
    int total = 0;

    double x_500_text_size, y_500_text_size;  // 文字(500)の大きさを格納する変数
    double x_100_text_size, y_100_text_size;  // 文字(100)の大きさを格納する変数
    double x_50_text_size, y_50_text_size;  // 文字(50)の大きさを格納する変数
    double x_10_text_size, y_10_text_size;  // 文字(10)の大きさを格納する変数
    double x_5_text_size, y_5_text_size;  // 文字(5)の大きさを格納する変数
    double x_1_text_size, y_1_text_size;  // 文字(1)の大きさを格納する変数

    double x_500_text_pos, y_500_text_pos;  // 文字(500)の位置を格納する変数
    double x_100_text_pos, y_100_text_pos;  // 文字(100)の位置を格納する変数
    double x_50_text_pos, y_50_text_pos;  // 文字(50)の位置を格納する変数
    double x_10_text_pos, y_10_text_pos;  // 文字(10)の位置を格納する変数
    double x_5_text_pos, y_5_text_pos;  // 文字(5)の位置を格納する変数
    double x_1_text_pos, y_1_text_pos;  // 文字(1)の位置を格納する変数

    int i;  // カウンタ変数

    scanf("%d", &total);

    HgOpen(WINDOW_X_SIZE, WINDOW_Y_SIZE);  // ウィンドウを開く

    HgSetFont(HG_G, 50);  // フォントをゴシック体、サイズ50に設定

    HgTextSize(&x_500_text_size, &y_500_text_size,
               "500");  // 文字(500)の大きさを取得して変数に格納
    HgTextSize(&x_100_text_size, &y_100_text_size,
               "100");  // 文字(100)の大きさを取得して変数に格納
    HgTextSize(&x_50_text_size, &y_50_text_size,
               "50");  // 文字(50)の大きさを取得して変数に格納
    HgTextSize(&x_10_text_size, &y_10_text_size,
               "10");  // 文字(10)の大きさを取得して変数に格納
    HgTextSize(&x_5_text_size, &y_5_text_size,
               "5");  // 文字(5)の大きさを取得して変数に格納

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