#include <stdio.h>
void mx_printchar(char c);

void mx_pyramid(int n) {
        if (n < 2 || n % 2 != 0)
            return;
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n * 2 - 2; x++) {
            //print front
            if (y < n) {
                if (x == n - 1 - y)
                    mx_printchar('/');
                else if (x < n - 1 + y * 2 && y != n - 1)
                    mx_printchar(' ');
            }
            if (y > 0 && y < n) {
                if (x == n - 2 + y)
                    mx_printchar('\\');
            }
            if (y == n - 1) {
                if (x < n * 2 - 3)
                    mx_printchar('_');
            }
            //print side
            if (y >= 0 && y < n / 2) {
                if (x == n - 1 + y * 2)
                    mx_printchar('\\');
            }
            if (y >= n / 2) {
                if (x == n * 2 - 3)
                    mx_printchar('|');
            }
        }
        mx_printchar('\n');
    }
}

// int main(){
//     mx_pyramid(6);
//     return 0;
// }
