#include <stdbool.h>

bool mx_isdigit(int c) {
if (c >= 48 && c <= 57) {
    return 1;
}
else
    return 0;
}
