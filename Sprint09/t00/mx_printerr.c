#include <stdio.h>
#include <unistd.h>
#include "printerr.h"

void mx_printerr(const char *s) {
    write(2, s, mx_strlen(s));
}
