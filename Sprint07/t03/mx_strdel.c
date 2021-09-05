#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mx_strdel(char **str) {
    if (*str) {
        free(*str);
        *str = NULL;
    }
}
