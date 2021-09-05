#include <stdbool.h>
int mx_atoi(const char *str);
void mx_printint(int n);
void mx_printchar(char c);
bool mx_isspace(char c);
bool mx_isdigit(int c);
int main(int argc, char *argv[]) {
    //int minus = 45;
    int osnova = 0;
    int j;

    for (int i = 1; i < argc; i++) {
        osnova = mx_atoi(argv[i]);
        
        for (int i = 31; i>= 0; i--) {
            j = osnova >> i;
            if (j & 1) mx_printint(1);
            else mx_printint(0);
        }
        mx_printchar('\n');
    }
    return 0;
}
