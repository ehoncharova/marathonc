int mx_sum_digits(int num) {
    int sum = 0;
    int temp = 0;

    if (num < 0) {
        num *= -1;
    }
    while(num != 0) {
        temp = num % 10;
        sum += temp;
        num /= 10;
    }
    return sum;
}
