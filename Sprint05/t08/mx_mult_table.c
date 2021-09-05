#include <unistd.h>

int mx_atoi(const char *str);
void mx_printint(int n);
void mx_printchar(char c);

int main(int argc, char *argv[]) {
    int min,max,y;
    if(mx_atoi(argv[1]) > mx_atoi(argv[2])) {
        min = mx_atoi(argv[2]);
        max = mx_atoi(argv[1]);
    }
    else {
        min = mx_atoi(argv[1]);
        max = mx_atoi(argv[2]);
    }
    for(int x = min; x <= max; x++) {
        if(argc > 3 || min > 10 || max > 10 || !mx_atoi(argv[1]) || !mx_atoi(argv[2])) break;
        for(y = min; y <= max; y++) {
            mx_printint(x * y);
            if(y < max) mx_printchar('\t');
        }
        y = min;
        mx_printchar('\n');
    }
    return 0;
}
