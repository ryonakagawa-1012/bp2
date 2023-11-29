/*
    ドットエディタ
    g2354017 中川 諒
*/
#include <handy.h>
#include <stdio.h>

#define END_BOX 40

#define WHITE 1
#define BLACK -1

#define WINDOW_SIZE 400  // ウィンドウのサイズ
#define DOT_NUM 4        // ドットの数

#define DOT_SIZE (WINDOW_SIZE / DOT_NUM)  // ドットの1辺の長さ

int main() {
    hgevent *event;
    double x, y;
    int tile_x, tile_y;

    int tile[DOT_NUM][DOT_NUM] = {};  // タイル管理用2次元配列

    for (int i = 0; i < DOT_NUM; i++) {
        for (int j = 0; j < DOT_NUM; j++) {
            tile[j][i] = WHITE;
        }
    }

    HgOpen(WINDOW_SIZE, WINDOW_SIZE);

    HgSetWidth(1.0);
    HgSetColor(HG_BLACK);
    HgSetEventMask(HG_MOUSE_DOWN);

    for (;;) {
        HgSetFillColor(HG_RED);
        HgBoxFill(0, 0, END_BOX, END_BOX, 1);  // 終了機能用ボックス

        event = HgEvent();

        if (event->type == HG_MOUSE_DOWN) {
            x = event->x;
            y = event->y;

            printf("x=%5.2f, y=%5.2f\n", x, y);

            tile_x = x / DOT_SIZE;  // タイルのx座標を計算
            tile_y = y / DOT_SIZE;  // タイルのy座標を計算

            tile[tile_x][tile_y] = -tile[tile_x][tile_y];  // 色情報を変更

            // 終了機能用ボックスをクリックしたら
            if (x < END_BOX && y < END_BOX) {
                HgClose();
                return 0;
            }

            // 2次元配列とタイルを同期させる処理
            for (int i = 0; i < DOT_NUM; i++) {
                for (int j = 0; j < DOT_NUM; j++) {
                    if (tile[j][i] == WHITE) {
                        HgSetFillColor(HG_WHITE);

                        HgBoxFill(DOT_SIZE * j, DOT_SIZE * i, DOT_SIZE, DOT_SIZE, 0);
                    } else if (tile[j][i] == BLACK) {
                        HgSetFillColor(HG_BLACK);

                        HgBoxFill(DOT_SIZE * j, DOT_SIZE * i, DOT_SIZE, DOT_SIZE, 0);
                    }
                }
            }
        }
    }
}