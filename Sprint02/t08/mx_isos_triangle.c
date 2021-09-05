#include <unistd.h>
  
void mx_printchar(char c);
void mx_isos_triangle(unsigned int length, char c) {
    unsigned int i,j;

    for (i = 0; i < length; i++) {
        for (j = 0; j <= i; ++j) {
            mx_printchar(c);
        }
        write(1, "\n", 1);
    }
}
