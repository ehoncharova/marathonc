int mx_max(int a, int b, int c) {
    int max;
    max = a > b ? (a > c ? a : c ): (b > c ? b : c);
    return max;
 }
