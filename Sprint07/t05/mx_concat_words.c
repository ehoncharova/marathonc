#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
int mx_strlen(char *s);
char *mx_strnew(const int size);

char *mx_concat_words(char **words) {
    char *str = NULL;
    char *tmp = NULL;

    if (words == NULL) {
        return NULL;
    }

    for (int i = 0; words[i] != NULL; i++) {
        tmp = mx_strjoin(str, words[i]);
        mx_strdel(&str);
        if (words[i + 1] != NULL) {
                str = mx_strjoin(tmp, " ");
        }
        else {
            str = mx_strdup(tmp);
        }
            mx_strdel(&tmp);
        }
    return str;
    }
