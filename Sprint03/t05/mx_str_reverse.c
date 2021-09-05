#include <stdio.h>
int mx_strlen(char *s);
void mx_swap_char(char *s1, char *s2);
void mx_str_reverse(char *s){
    int l,i;
    char *s1,*s2;
    l=mx_strlen(s);
    s1= s;
    s2 = s;
    for (i = 0; i < l - 1; i++)
        s2++;
     for (i = 0; i < l / 2; i++) {
        mx_swap_char(s1,s2);
        // update pointers positions
        s1++;
        s2--;
    }
}
