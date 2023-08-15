#include <handy.h>
#include <math.h>
#include <stdio.h>

#define CENTER 200.0

int main() {
    double x[4] = {-10.0, 30.0, -30.0, 10.0};
    double y[4] = {80.0, 0.0, 0.0, 80.0};
    int i;

    HgOpen(400.0, 400.0);
    HgSetWidth(1.0);
    HgSetColor(HG_BLACK);

    HgLine(5.0, CENTER, 395.0, CENTER);
    HgLine(CENTER, 5.0, CENTER, 395.0);

    HgSetColor(HG_BLUE);

    for (i = 0; i < 3; i++) {
        HgLine(x[i] + CENTER, y[i] + CENTER, x[i + 1] + CENTER,
               y[i + 1] + CENTER);
    }

    HgGetChar();
    HgClose();

    return 0;
}
