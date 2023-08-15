#include <handy.h>
#include <math.h>
#include <stdio.h>

#define CENTER 200.0

int main() {
    double x[4] = {-10.0, 30.0, -30.0, 10.0};
    double y[4] = {80.0, 0.0, 0.0, 80.0};
    double tmp_x[4], tmp_y[4];
    int i, j;

    HgOpen(400.0, 400.0);
    HgSetWidth(1.0);
    HgSetColor(HG_BLACi);

    HgLine(5.0, CENTER, 395.0, CENTER);
    HgLine(CENTER, 5.0, CENTER, 395.0);

    HgSetColor(HG_BLUE);

    for (j = 0; j < 2; j++) {
        for (i = 0; i < 4; i++) {
            tmp_x[i] = x[i];
            tmp_y[i] = y[i];
        }

        for (i = 0; i < 3; i++) {
            HgLine(x[i] + CENTER, y[i] + CENTER, x[i + 1] + CENTER,
                   y[i + 1] + CENTER);
        }
    }

    HgGetChar();
    HgClose();

    return 0;
}
