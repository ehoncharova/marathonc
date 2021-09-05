#include <stdbool.h>
#include <stdio.h>
bool mx_islower(char s);
bool mx_isupper(char s);
int mx_tolower(int c);
int mx_toupper(int c);

void mx_reverse_case(char *s){
    while( *s!='\0') {
            if (mx_isupper(*s)){
            *s=mx_tolower(*s);
        }
        else if (mx_islower(*s)) {
            *s=mx_toupper(*s);
        }
        s++;
        }
}
//int main() {
//char str[100]="HeLLo Neo";
//mx_reverse_case(str);
//printf("%s",str);
//return 0;
//}
