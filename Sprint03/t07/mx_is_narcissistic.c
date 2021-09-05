#include <stdbool.h>
#include <stdio.h>
double mx_pow(double a, unsigned int pow);
bool mx_is_narcissistic(int num){
    int count = 0;
    int length =num;
    int mult = num;
    int a=0;

    while(length){
        length/=10;
        count++;
    }
    while (mult){
    int current = mult%10;
    a+=mx_pow(current,count);
    mult/=10;
}
if(num>0 && a==num){
    return true;
}
else {
    return false;
}
}
