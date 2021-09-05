#include <stdio.h>
void mx_printstr(const char *s);
void mx_is_positive(int i) {
    if(i>0){
        mx_printstr("positive");
    }

    if(i<0){
        mx_printstr("negative");
    }

    if(i==0){
        mx_printstr("zero");
    }
}
