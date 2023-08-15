#include <handy.h>
#include <math.h>
#include <stdio.h>

#define CENTER 200.0
int main() {
    double x, y;
    double tmp_x, tmp_y;
    double rad;

    scanf("%lf", &rad);

    HgOpen(400.0, 400.0);

    HgSetWidth(1.0);
    HgSetColor(HG_BLACK);
    HgLine(5.0, 200.0, 395.0, 200.0);
    HgLine(200.0, 5.0, 200.0, 395.0);

    x = 150.0;
    y = 90.0;
    HgSetColor(HG_BLUE);
    HgCircle(x + CENTER, y + CENTER, 3.0);

    for (int i = 1; rad * i < M_PI; i++) {
        tmp_x = x;
        tmp_y = y;

        x = tmp_x * cos(M_PI / 4) - tmp_y * sin(M_PI / 4);
        y = tmp_x * sin(M_PI / 4) + tmp_y * cos(M_PI / 4);

        HgSetColor(HG_RED);
        HgCircle(x + CENTER, y + CENTER, 3.0);
    }

    HgGetChar();
    HgClose();
    return 0;
}