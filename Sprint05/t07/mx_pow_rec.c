#include <stdio.h>
double mx_pow_rec(double n, unsigned int pow) {
    if(pow == 0) return 1;
    else return n*mx_pow_rec(n, --pow);
    }
// int main(void){
//     for (int i=0; i<10;++i){
//         printf("%f/n", mx_pow_rec(3,i));
//     }
//     return 0;
// }
