#include <stdbool.h>
bool mx_is_prime (int num){
    int c;
    for (c=2;c<=num-1;c++){
        if (num%c==0)
            return 0;
        }
        return 1;
    }
