#include <stdbool.h>
#include <stdio.h>
bool mx_isspace(char c) {
// whitespaces decimal: 9, 11, 12, 13, 10
if ((c >= 9 && c <= 13) || c == 32) {
    return true;
}
else {
    return false;
}
}
