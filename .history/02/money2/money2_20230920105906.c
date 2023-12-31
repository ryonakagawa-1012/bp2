/*
    金種計算 (グラフィック有り)
    g235
*/

#include <handy.h>
#include <stdio.h>

#define WINDOW_X_SIZE 1200
#define WINDOW_Y_SIZE 1000

#define COIN_Y 100

void money_draw(int, int);

double x_500_text_size, y_500_text_size;  // 文字(500)の大きさを格納する変数
double x_100_text_size, y_100_text_size;  // 文字(100)の大きさを格納する変数
double x_50_text_size, y_50_text_size;  // 文字(50)の大きさを格納する変数
double x_10_text_size, y_10_text_size;  // 文字(10)の大きさを格納する変数
double x_5_text_size, y_5_text_size;  // 文字(5)の大きさを格納する変数
double x_1_text_size, y_1_text_size;  // 文字(1)の大きさを格納する変数

double x_500_text_pos;  // 文字(500)の位置を格納する変数
double x_100_text_pos;  // 文字(100)の位置を格納する変数
double x_50_text_pos;   // 文字(50)の位置を格納する変数
double x_10_text_pos;   // 文字(10)の位置を格納する変数
double x_5_text_pos;    // 文字(5)の位置を格納する変数
double x_1_text_pos;    // 文字(1)の位置を格納する変数

int main() {
    int money[6] = {};
    int coin = 500;
    int total = 0;

    int i;  // カウンタ変数

    scanf("%d", &total);

    HgOpen(WINDOW_X_SIZE, WINDOW_Y_SIZE);  // ウィンドウを開く

    HgSetFont(HG_G, 50);  // フォントをゴシック体、サイズ50に設定

    /**********文字を計算して描画**********/
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
    HgTextSize(&x_1_text_size, &y_1_text_size,
               "1");  // 文字(1)の大きさを取得して変数に格納

    x_500_text_pos =
        ((WINDOW_X_SIZE / 6) - x_500_text_size) / 2;  // 文字(500)の位置を計算

    x_100_text_pos =
        (WINDOW_X_SIZE / 6) +
        ((WINDOW_X_SIZE / 6) - x_100_text_size) / 2;  // 文字(100)の位置を計算

    x_50_text_pos =
        (WINDOW_X_SIZE / 6) * 2 +
        ((WINDOW_X_SIZE / 6) - x_50_text_size) / 2;  // 文字(50)の位置を計算

    x_10_text_pos =
        (WINDOW_X_SIZE / 6) * 3 +
        ((WINDOW_X_SIZE / 6) - x_10_text_size) / 2;  // 文字(10)の位置を計算

    x_5_text_pos =
        (WINDOW_X_SIZE / 6) * 4 +
        ((WINDOW_X_SIZE / 6) - x_5_text_size) / 2;  // 文字(5)の位置を計算

    x_1_text_pos =
        (WINDOW_X_SIZE / 6) * 5 +
        ((WINDOW_X_SIZE / 6) - x_1_text_size) / 2;  // 文字(1)の位置を計算

    HgText(x_500_text_pos, COIN_Y, "500");  // 文字(500)を描画

    HgText(x_100_text_pos, COIN_Y, "100");  // 文字(100)を描画

    HgText(x_50_text_pos, COIN_Y, "50");  // 文字(50)を描画

    HgText(x_10_text_pos, COIN_Y, "10");  // 文字(10)を描画

    HgText(x_5_text_pos, COIN_Y, "5");  // 文字(5)を描画

    HgText(x_1_text_pos, COIN_Y, "1");  // 文字(1)を描画

    /**********ここまで**********/

    /**********表示したテキストの中心を計算**********/

    for (i = 0; i < 6; i++) {
        money[i] = total / coin;
        total = total % coin;

        printf("%d:%d ", coin, money[i]);

        money_draw(coin, money[i]);

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

#include "cal_img_center.c"
#include "draw_img.c"

#define SLEEP_TIME 0.2

void money_draw(int kind, int sum) {
    double x_text_center, y_text_center;

    cal_center(&x_text_center, &y_text_center, kind);

    switch (kind) {
        case 500:
            for (int i = 0; i < sum; i++) {
                draw500(x_text_center, (y_text_center + 100) + 25 * i);
                HgSleep(SLEEP_TIME);
            }

            break;

        case 100:
            for (int i = 0; i < sum; i++) {
                draw100(x_text_center, (y_text_center + 100) + 25 * i);
                HgSleep(SLEEP_TIME);
            }

            break;

        case 50:
            for (int i = 0; i < sum; i++) {
                draw50(x_text_center, (y_text_center + 100) + 25 * i);
                HgSleep(SLEEP_TIME);
            }

            break;

        case 10:
            for (int i = 0; i < sum; i++) {
                draw10(x_text_center, (y_text_center + 100) + 25 * i);
                HgSleep(SLEEP_TIME);
            }

            break;

        case 5:
            for (int i = 0; i < sum; i++) {
                draw5(x_text_center, (y_text_center + 100) + 25 * i);
                HgSleep(SLEEP_TIME);
            }

            break;

        case 1:
            for (int i = 0; i < sum; i++) {
                draw1(x_text_center, (y_text_center + 100) + 25 * i);
                HgSleep(SLEEP_TIME);
            }

            break;
    };
};