#include <handy.h>
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

# define True 1
# define False 0

# define WINDOW_SIZE 400.0
#define FISH_NUM 10

void fish_left(double x, double y, double size){
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
    for (int i = 0; i < 5; i++) {
        HgLine(x + size * 1.2 + i * size / 3.0, y - size / 2.0,
           x + size * 1.2 + i * size / 3.0, y + size / 2.0);
    }
}

void fish_right(double x, double y, double size){
    HgSetColor(HG_RED);
    HgSetFillColor(HG_RED);
    HgFanFill(x, y, size, 0.25 * M_PI, 1.75 * M_PI, 0);
    HgMoveTo(x - size, y);
    HgLineTo(x - size * 3.0, y);
    HgLineTo(x - size * 4.0, y - size);
    HgMoveTo(x - size * 3.0, y);
    HgLineTo(x - size * 4.0, y + size);
    HgSetFillColor(HG_WHITE);
    HgCircleFill(x - size / 3.0, y + size / 2.0, size / 4.0, 0);
    HgSetColor(HG_RED);
    for (int i = 0; i < 5; i++) {
        HgLine(x - size * 1.2 - i * size / 3.0, y - size / 2.0,
           x - size * 1.2 - i * size / 3.0, y + size / 2.0);
    }
}

int main() {
    int i, is_left[FISH_NUM];
    double x[FISH_NUM], y[FISH_NUM], size[FISH_NUM], dx[FISH_NUM], dy[FISH_NUM];

    HgOpen(WINDOW_SIZE, WINDOW_SIZE);

    srand(time(NULL));

    for (i = 0; i < FISH_NUM; i++) {
        x[i] = rand() % (int)WINDOW_SIZE;
        y[i] = rand() % (int)WINDOW_SIZE;
        size[i] = rand() % 20 + 5;
        dx[i] = ((rand() % 2 == 0) ? -1 : 1) * 0.9 * size[i];
        dy[i] = ((rand() % 2 == 0) ? -1 : 1) * 0.5 * size[i];
        is_left[i] = rand() % 2;
    }

    
    while (1) {
        HgClear();

        for (i = 0; i < FISH_NUM; i++) {            
            if (is_left[i]) {
                fish_left(x[i], y[i], size[i]);
            }
            else{
                fish_right(x[i], y[i], size[i]);
            }

            if (y[i] + dy[i] < size[i] || y[i] + dy[i] > (WINDOW_SIZE - size[i])){
                dy[i] *= (-1.0);
            }

                y[i] += dy[i];

            if (x[i] + dx[i] < size[i] || x[i] + dx[i] > (WINDOW_SIZE - size[i])){
                dx[i] *= (-1.0);
            }

                x[i] += dx[i];

            if (0 < dx[i]) {
                is_left[i] = False;
            } else {
                is_left[i] = True;
            }
        }

        HgSleep(0.1);
    }
}
