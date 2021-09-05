#include <stdio.h>

int mx_strlen (const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strchr(const char *s, int c);

char *mx_strstr(const char *s1, const char *s2) {
        char *a = (char *)s1;
	char *b = (char *)s2;

        if ((!s1) || (!s2))
                return NULL;
	if (!mx_strlen(s2))
                return a;
        while (*a) {
        if (!mx_strncmp(a, b, mx_strlen(b)))
            return a;
        a++;
    }
    return NULL;
}
