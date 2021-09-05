#include <stdio.h>
void mx_printchar(char s);

void mx_str_separate (const char *str, char delim) {
    int x=0;
    int count=0;
    while(*str != '\0'){
        if (*str!=delim){
            mx_printchar(*str);
            x=0;
        }
        else if (*str == delim && x==0) {
            mx_printchar('\n');
            count++;
            x=1;
        }
        str++;
    }
    mx_printchar('\n');
}
