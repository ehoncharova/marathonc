#ifndef MINILIBMX_H
#define MINILIBMX_H

int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int num);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strcpy( char *dst, const char *src);
int mx_strlen(const char *s);

#endif
