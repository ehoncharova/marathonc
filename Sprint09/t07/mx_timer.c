#include <stdio.h>
#include <time.h>

void mx_printint(int n);

void f(void);

double mx_timer(void (*f)()) {
    clock_t start;
    clock_t stop;

    start = clock();
    f();
    stop = clock();

    if(stop < 0 || start < 0) {
        return -1;
    }
    return stop - start;

}
