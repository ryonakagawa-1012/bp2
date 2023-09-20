#include <handy.h>
#include <stdio.h>

#define END_BOX 40

int main() {
    hgevent *event;
    double x, y;

    HgOpen(400.0, 400.0);

    HgSetWidth(1.0);
    HgSetColor(HG_BLACK);
    HgSetEventMask(HG_MOUSE_DOWN);

    HgBoxFill(0, 0, END_BOX, END_BOX, 1);

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