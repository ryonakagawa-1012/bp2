#include <handy.h>
#include <stdio.h>

#define END_BOX 40

#define WHITE 0
#define BLACK 1

#define WINDOW_SIZE 400  // ウィンドウのサイズ
#define DOT_NUM 4        // ドットの数

#define DOT_SIZE WINDOW_SIZE / DOT_NUM  // ドットの1辺の長さ

int main() {
    hgevent *event;
    double x, y;

    int tile[DOT_NUM][DOT_NUM] = {};  //

    HgOpen(WINDOW_SIZE, WINDOW_SIZE);

    HgSetWidth(1.0);
    HgSetColor(HG_BLACK);
    HgSetEventMask(HG_MOUSE_DOWN);

    HgBoxFill(0, 0, END_BOX, END_BOX, 1);  // 終了機能用ボックス

    for (;;) {
        event = HgEvent();
        if (event->type == HG_MOUSE_DOWN) {
            x = event->x;
            y = event->y;

            printf("x=%5.2f, y=%5.2f\n", x, y);

            tile[(int)x / DOT_NUM][(int)y / DOT_NUM] = 1;

            if (x < END_BOX &&
                y < END_BOX)  // 終了機能用ボックスをクリックしたら
            {
                HgClose();
                return 0;
            }

            HgBox(x, y, 5.0, 5.0);
        }
    }
}