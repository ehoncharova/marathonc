int mx_mid(int a, int b, int c) {
    int mid;

    mid = a > b ? (b > c ? b : c) : (a > c ? a : c);
    return mid;
}
