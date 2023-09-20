#include <handy.h>
#include <stdio.h>

#define END_BOX 40

#define WHITE 0
#define BLACK 1

#define WINDOW_SIZE 400  // ウィンドウのサイズ
#define DOTS_NUM 12      // ドットの数

#define CELL_SIZE WINDOW_SIZE / DOTS_NUM

int main() {
    hgevent *event;
    double x, y;

    int tile[DOTS_NUM][DOTS_NUM] = {};

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

            if (x < END_BOX && y < END_BOX) {
                HgClose();
                return 0;
            }

            HgBox(x, y, 5.0, 5.0);
        }
    }
}