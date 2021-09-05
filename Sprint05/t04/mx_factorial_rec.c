// #include <stdio.h>
int mx_factorial_rec(int n){
if (n == 0 || n == 1) {
        return 1;
    }
if (n < 0 || n > 12) {
    return 0;
}
return n * mx_factorial_rec(n - 1);
}
// int main() {
//     int n=5;
//     printf("%d",mx_factorial_rec(n));
//     return 0;
// }
