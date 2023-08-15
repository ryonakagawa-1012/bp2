#include <handy.h>
#include <math.h>
#include <stdio.h>

int main() {
    double x[4] = {-10.0, 30.0, -30.0, 10.0};
    double y[4] = {80.0, 0.0, 0.0, 80.0};
    int i;

    HgOpen(400.0, 400.0);
    HgSetWidth(1.0);
    HgSetColor(HG_BLACK);

    HgLine(5.0, 200.0, 395.0, 200.0);
    HgLine(200.0, 5.0, 200.0, 395.0);

    HgSetColor(HG_BLUE);
    for (i = 0; i < 3; i++) {
        HgLine(x[i] + 200.0, y[i] + 200.0, x[i + 1] + 200.0, y[i + 1] + 200.0);
    }

    HgGetChar();
    HgClose();

    return 0;
}
