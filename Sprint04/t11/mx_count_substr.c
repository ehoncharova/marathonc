#include <stdio.h>
#include <unistd.h>

char *mx_strstr(const char *s1, const char *s2);
int mx_strlen (const char *s);

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;

    while(mx_strstr(str, sub) != NULL) {
        count++;
        str = mx_strstr(str, sub);
        str ++;
    }
    return count;
}
