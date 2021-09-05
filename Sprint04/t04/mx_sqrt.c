int mx_sqrt(int x) {
    float sqrt = 0;
    int temp_for_x = x;

    if (x >= 0) {
        while (sqrt * sqrt != temp_for_x) {
            sqrt = x / 2;
            x = sqrt;
            if (x <= 1 && sqrt <= 1) {
                return 0;
            }
        }
        return (int)sqrt;
    }
    else {
        return 0;
    }
}
