#include <handy.h>
#include <math.h>
#include <stdio.h>

int main() {
    int i;
    double x, y, size, dx, dy;

    HgOpen(400.0, 400.0);

    x = 200.0;
    y = 200.0;
    size = 10.0;
    dx = -0.9 * size;
    dy = 0.5 * size;

    while (1) {
        HgClear();
        HgSetColor(HG_RED);
        HgSetFillColor(HG_RED);
        HgFanFill(x, y, size, 1.25 * M_PI, 0.75 * M_PI, 0);
        HgMoveTo(x + size, y);
        HgLineTo(x + size * 3.0, y);
        HgLineTo(x + size * 4.0, y - size);
        HgMoveTo(x + size * 3.0, y);
        HgLineTo(x + size * 4.0, y + size);
        HgSetFillColor(HG_WHITE);
        HgCircleFill(x + size / 3.0, y + size / 2.0, size / 4.0, 0);
        HgSetColor(HG_RED);
        for (i = 0; i < 5; i++) {
            HgLine(x + size * 1.2 + i * size / 3.0, y - size / 2.0,
                   x + size * 1.2 + i * size / 3.0, y + size / 2.0);
        }

        if (y + dy < size || y + dy > (400.0 - size)) dy *= (-1.0);
        y += dy;
        if (x + dx < size || x + dx > (400.0 - size)) dx *= (-1.0);
        x += dx;
        HgSleep(0.1);
    }
}
