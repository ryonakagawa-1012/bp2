void draw500(int x, int y) {
    int img = HgImageLoad("image/money_coin_reiwa_500.png");
    HgImagePut(x, y, img,0.5,0);
    HgImageUnload(img);
};