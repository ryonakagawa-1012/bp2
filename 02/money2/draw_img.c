#define IMG_SIZE 0.75

void draw500(int x, int y) {
    int img = HgImageLoad("image/money_coin_reiwa_500.png");
    HgImagePut(x, y, img,IMG_SIZE,0);
    HgImageUnload(img);
};

void draw100(int x, int y) {
    int img = HgImageLoad("image/money_coin_reiwa_100.png");
    HgImagePut(x, y, img,IMG_SIZE,0);
    HgImageUnload(img);
};

void draw50(int x, int y) {
    int img = HgImageLoad("image/money_coin_reiwa_50.png");
    HgImagePut(x, y, img,IMG_SIZE,0);
    HgImageUnload(img);
};

void draw10(int x, int y) {
    int img = HgImageLoad("image/money_coin_reiwa_10.png");
    HgImagePut(x, y, img,IMG_SIZE,0);
    HgImageUnload(img);
};

void draw5(int x, int y) {
    int img = HgImageLoad("image/money_coin_reiwa_5.png");
    HgImagePut(x, y, img,IMG_SIZE,0);
    HgImageUnload(img);
};

void draw1(int x, int y) {
    int img = HgImageLoad("image/money_coin_reiwa_1.png");
    HgImagePut(x, y, img,IMG_SIZE,0);
    HgImageUnload(img);
};
