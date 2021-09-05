#include <stdio.h>

int mx_strlen (const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strchr(const char *s, int c);

char *mx_strstr(const char *s1, const char *s2) {
        char start = *s2;
        char *ret;
        int c = mx_strlen(s1);

        for (int i = 0; i < mx_strlen(s1); i++) {
                if (mx_strchr(s1, start) == 0)
                        ret = NULL;
                else if (mx_strncmp(mx_strchr(s1, start), s2, mx_strlen(s2)) == 0) {
                        ret = mx_strchr(s1, start);
                        i = c;
                }
                else
                        ret = NULL;
                s1++;
        }
  return ret;
}
