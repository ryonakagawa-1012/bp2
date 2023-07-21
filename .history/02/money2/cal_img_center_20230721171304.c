void cal_center(double *x, double *y ,int kind){
    switch (kind){
        case 500:
            *x = x_500_text_pos + (x_500_text_size / 2);
            *y = COIN_Y + (y_500_text_size / 2);

            break;

        case 100:
            *x = x_100_text_pos + (x_100_text_size / 2);
            *y = y_100_text_pos + (y_100_text_size / 2);

            break;

        case 50:
          *x = x_50_text_pos + (x_50_text_size / 2);
          *y = y_50_text_pos + (y_50_text_size / 2);

            break;

        case 10:
            *x = x_10_text_pos + (x_10_text_size / 2);
            *y = y_10_text_pos + (y_10_text_size / 2);

            break;

        case 5:
            
            break;

        case 1:

            break;
    }
};