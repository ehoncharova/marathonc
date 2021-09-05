#include <stdio.h>

char *mx_strchr(const char *s, int c) {
   
   while (*s != (char) c) {
        if (!*s++) {
            return NULL;
        }
    }
    return (char *)s;
} 
