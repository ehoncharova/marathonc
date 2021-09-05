#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
bool mx_isspace(char c);
bool mx_isdigit(int c);
void mx_printint(int n);
void mx_printchar(char c);
int mx_atoi(const char *str);

int main(int argc, char *argv[]) {
    int sum = 0;
    int minus = 45;
	
    for (int i = 1; i < argc; i++) {
        if (mx_isspace(*argv[i]) || (!mx_isdigit(*argv[i]) && *argv[i] != minus)) {
            continue;
        }

        sum += mx_atoi(argv[i]);
    }
    if (argc <= 1 && sum == 0) {
        return 0;
    }
    else {
    mx_printint(sum);
    mx_printchar('\n');
    }
    return 0;
}
