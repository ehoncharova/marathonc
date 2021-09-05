#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mx_strnew(const int size) {
    char *str;

    if (size >= 0) {
        str = malloc(size);
        return str;
    }
    else {
        return NULL;
    }
}
