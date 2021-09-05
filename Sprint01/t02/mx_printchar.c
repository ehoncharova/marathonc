#include <unistd.h>
#include <stdio.h>

void mx_printchar(char c) {
     write(1, &c, 1);
}
