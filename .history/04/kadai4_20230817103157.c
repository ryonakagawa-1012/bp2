#include <handy.h>
#include <math.h>
#include <stdio.h>

#define X_CENTER 200.0
#define Y_CENTER 200.0

int main() {
    double x[4] = {-10.0, 30.0, -30.0, 10.0};
    double y[4] = {80.0, 0.0, 0.0, 80.0};
    double tmp_x[4], tmp_y[4];
    int i, j;

    HgOpen(400.0, 400.0);
    HgSetWidth(1.0);
    HgSetColor(HG_BLACK);

    HgLine(5.0, Y_CENTER, 395.0, Y_CENTER);
    HgLine(X_CENTER, 5.0, X_CENTER, 395.0);

    HgSetColor(HG_BLUE);

    for (i = 0; i < 3; i++) {
        HgLine(x[i] + X_CENTER, y[i] + Y_CENTER, x[i + 1] + X_CENTER,
               y[i + 1] + Y_CENTER);
    }

    for (j = 0; j < 2; j++) {
        for (i = 0; i < 4; i++) {
            tmp_x[i] = x[i];
            tmp_y[i] = y[i];
        }

        for (i = 0; i < 4; i++) {
            x[i] = tmp_x[i] * cos(M_PI / 4) - tmp_y[i] * sin(M_PI / 4);
            y[i] = tmp_x[i] * sin(M_PI / 4) + tmp_y[i] * cos(M_PI / 4);
        }

        for (i = 0; i < 3; i++) {
            HgLine(x[i] + X_CENTER, y[i] + Y_CENTER, x[i + 1] + X_CENTER,
                   y[i + 1] + Y_CENTER);
        }
    }

    HgGetChar();
    HgClose();

    return 0;
}
