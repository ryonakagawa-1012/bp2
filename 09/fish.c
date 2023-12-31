/*
    左右を向いて泳ぐサカナ
    g2354017 中川 諒
*/
#include <handy.h>
#include <math.h>
#include <stdio.h>

# define True 1
# define False 0

void fish_left(double x, double y, double size){
    HgSetColor(HG_RED); // 赤色
    HgSetFillColor(HG_RED); 
    HgFanFill(x, y, size, 1.25*M_PI, 0.75*M_PI, 0); // アタマを描く
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

void fish_right(double x, double y, double size){
    HgSetColor(HG_RED); // 赤色
    HgSetFillColor(HG_RED); 
    HgFanFill(x, y, size, 0.25 * M_PI, 1.75 * M_PI, 0);  // アタマを描く
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
    int i, is_left;
    double x, y, size, dx, dy;

    HgOpen(400.0, 400.0);

    x = 200.0;
    y = 200.0;
    size = 10.0;
    dx = -0.9 * size;
    dy = 0.5 * size;
    is_left = 1;
    
    while (1) {
        HgClear();
        
        if (is_left) {
            fish_left(x, y, size);
        }
        else{
            fish_right(x, y, size);
        }

        if (y + dy < size || y + dy > (400.0 - size)){
            dy *= (-1.0);
        }

            y += dy;

        if (x + dx < size || x + dx > (400.0 - size)){
            dx *= (-1.0);
        }

            x += dx;

        if (0 < dx) {
            is_left = False;
        } else {
            is_left = True;
        }

        HgSleep(0.1);
    }
}
