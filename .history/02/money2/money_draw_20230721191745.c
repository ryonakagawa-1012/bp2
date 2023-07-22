void money_draw(int kind, int sum) {
    double x_text_center, y_text_center;

    cal_center(&x_text_center, &y_text_center, kind);

    switch (kind) {
        case 500:
            for (int i = 0; i < sum; i++) {
                draw500(x_text_center, (y_text_center + 100) + 25 * i);
                HgSleep(SLEEP_TIME);
            }

            break;

        case 100:
            for (int i = 0; i < sum; i++) {
                draw100(x_text_center, (y_text_center + 100) + 25 * i);
                HgSleep(SLEEP_TIME);
            }

            break;

        case 50:
            for (int i = 0; i < sum; i++) {
                draw50(x_text_center, (y_text_center + 100) + 25 * i);
                HgSleep(SLEEP_TIME);
            }

            break;

        case 10:
            for (int i = 0; i < sum; i++) {
                draw10(x_text_center, (y_text_center + 100) + 25 * i);
                HgSleep(SLEEP_TIME);
            }

            break;

        case 5:
            for (int i = 0; i < sum; i++) {
                draw5(x_text_center, (y_text_center + 100) + 25 * i);
                HgSleep(SLEEP_TIME);
            }

            break;

        case 1:
            for (int i = 0; i < sum; i++) {
                draw1(x_text_center, (y_text_center + 100) + 25 * i);
                HgSleep(SLEEP_TIME);
            }

            break;
    };
}