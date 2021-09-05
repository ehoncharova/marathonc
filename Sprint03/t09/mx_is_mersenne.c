#include <stdbool.h>
double mx_pow(double a, unsigned int pow);
bool  mx_is_prime(int num);
bool mx_is_mersenne(int n){
    int mer=mx_pow(2,n)-1;
    if (mx_is_prime(mer)==true){
        return true;
    }
    else {
        return false;
    }
}
