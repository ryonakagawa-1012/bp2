#include <handy.h>
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

# define True 1
# define False 0

# define WINDOW_SIZE 400.0
#define FISH_NUM 10

void fish_left(double x, double y, double size, int is_king){
    HgSetColor(HG_RED); // 赤色
    HgSetFillColor(HG_RED); 
    HgFanFill(x, y, size, 1.25*M_PI, 0.75*M_PI, 0); // アタマを描く
    if (is_king) { // 王様の場合は青色の円を描く
    HgSetColor(HG_BLUE);
    HgCircle(x, y, size+10);
    HgSetColor(HG_RED);
    }
    HgMoveTo(x+size, y); // 胴骨
    HgLineTo(x+size*3.0, y); // 胴骨
    HgLineTo(x+size*4.0, y-size); // 尾び
    HgMoveTo(x+size*3.0, y); 
    HgLineTo(x+size*4.0, y+size); // 尾び
    HgSetFillColor(HG_WHITE); // 白色 
    HgCircleFill(x+size/3.0, y+size/2.0, size/4.0, 0); // 目を描く
    HgSetColor(HG_RED); // 赤色
    for(int i=0; i<5; i++) { // 胴骨
        HgLine(x + size * 1.2 + i * size / 3.0, y - size / 2.0,
           x + size * 1.2 + i * size / 3.0, y + size / 2.0);
    }
}

void fish_right(double x, double y, double size, int is_king){
    HgSetColor(HG_RED); // 赤色
    HgSetFillColor(HG_RED); 
    HgFanFill(x, y, size, 0.25 * M_PI, 1.75 * M_PI, 0);  // アタマを描く
    if (is_king) { // 王様の場合は青色の円を描く
    HgSetColor(HG_BLUE);
    HgCircle(x, y, size+10);
    HgSetColor(HG_RED);
    }
    HgMoveTo(x - size, y);  // 胴骨
    HgLineTo(x - size * 3.0, y); // 胴骨
    HgLineTo(x - size * 4.0, y - size);  // 尾び
    HgMoveTo(x - size * 3.0, y); 
    HgLineTo(x - size * 4.0, y + size); // 尾び
    HgSetFillColor(HG_WHITE);   // 白色
    HgCircleFill(x - size / 3.0, y + size / 2.0, size / 4.0, 0); // 目を描く
    HgSetColor(HG_RED); // 赤色
    for (int i = 0; i < 5; i++) { // 胴骨
        HgLine(x - size * 1.2 - i * size / 3.0, y - size / 2.0,
           x - size * 1.2 - i * size / 3.0, y + size / 2.0);
    }
}

int main() {
    int i, is_king, is_left[FISH_NUM];
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
            if (i == 0) {
                is_king = True;
            } else {
                is_king = False;
            }

            if (is_left[i]) {
                fish_left(x[i], y[i], size[i], is_king);
            }
            else{
                fish_right(x[i], y[i], size[i], is_king);
            }

            if (i != 0 && hypot(fabs(x[i] - x[0]), fabs(y[i] - y[0])) < 50) { // 王様以外の魚が王様に近づいたら群れる
                dx[i] = dx [0]; // 速度を王様と同じにする
                dy[i] = dy [0]; // 速度を王様と同じにする
                is_left[i] = is_left[0]; // 向きを王様と同じにする
            }

            if (y[i] + dy[i] < size[i] || y[i] + dy[i] > (WINDOW_SIZE - size[i])){ // 壁に当たったら反射
                dy[i] *= (-1.0);
            }
                y[i] += dy[i]; // 位置を更新

            if (x[i] + dx[i] < size[i] || x[i] + dx[i] > (WINDOW_SIZE - size[i])){ // 壁に当たったら反射
                dx[i] *= (-1.0);
            }
                x[i] += dx[i];  // 位置を更新

            if (0 < dx[i]) {
                is_left[i] = False;
            } else {
                is_left[i] = True;
            }
        }

        HgSleep(0.1);
    }
}
