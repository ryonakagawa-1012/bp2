#include <handy.h>
#include <math.h>
#include <stdio.h>

#define CENTER 200.0
int main() {
    double x, y;

    HgOpen(400.0, 400.0);

    HgSetWidth(1.0);
    HgSetColor(HG_BLACK);
    HgLine(5.0, 200.0, 395.0, 200.0);
    HgLine(200.0, 5.0, 200.0, 395.0);

    x = 150.0;
    y = 90.0;
    HgSetColor(HG_BLUE);
    HgCircle(x + CENTER, y + CENTER, 3.0);

    x = x * cos(M_PI / 4) - y * sin(M_PI / 4);
    y = x * sin(M_PI / 4) - y * cos(M_PI / 4);

    HgSetColor(HG_RED);
    HgCircle(x + CENTER, y + CENTER, 3.0);

    HgGetChar();
    HgClose();
    return 0;
}