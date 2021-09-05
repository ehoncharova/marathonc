#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_atoi(const char *str) {
    int i = 0;
    int sign = 1;
    int base = 0;
     
    while (mx_isspace(*str) && i == 0) {
        if(mx_isdigit(*str)) {
        ++i;
        }
        else {
            str++;
        }
    }
     
    if (*str == '-') {
        sign = -1;
        str++;
    }
   
    while (mx_isdigit(*str)) {
        base = base * 10 + *str - '0';
        str++;
        if (!mx_isdigit(*str) && *str != '\0') {
        base = 0;
        break;
        }
    }
    
    return base * sign;
}
