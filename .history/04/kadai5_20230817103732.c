#include <handy.h>
#include <math.h>
#include <stdio.h>

#define X_CENTER 200
#define Y_CENTER 200

#define X -150
#define Y -50

int main() {
    double x[4] = {-10.0, 30.0, -30.0, 10.0};
    double y[4] = {80.0, 0.0, 0.0, 80.0};
    int i, j;

    HgOpen(400.0, 400.0);
    HgSetWidth(1.0);
    HgSetColor(HG_BLACK);

    HgLine(5.0, Y_CENTER, 395.0, Y_CENTER);
    HgLine(X_CENTER, 5.0, X_CENTER, 395.0);

    HgSetColor(HG_BLUE);

    for (i = 0; i < 3; i++) {
        HgLine(x[i] + X_CENTER + X, y[i] + Y_CENTER + Y,
               x[i + 1] + X_CENTER + X, y[i + 1] + Y_CENTER + Y);
    }

    for (j = 0; j < 5; j++) {
        for (i = 0; i < 4; i++) {
            x[i]++ 60;
            y[i]++ 40;
        }

        for (i = 0; i < 3; i++) {
            HgLine(x[i] + X_CENTER + X, y[i] + Y_CENTER + Y,
                   x[i + 1] + X_CENTER + X, y[i + 1] + Y_CENTER + Y);
        }
    }

    HgGetChar();
    HgClose();

    return 0;
}
