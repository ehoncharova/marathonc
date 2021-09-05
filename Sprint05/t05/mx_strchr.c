#include <stdio.h>
int mx_strlen(const char *s);
void mx_printchar(char c);
void mx_printstr(const char *s);

char *mx_strchr(const char *s, int c) {

   while (*s != (char) c) {
        if (!*s++) {
            return NULL;
        }
    }
    return (char *)s;
}
