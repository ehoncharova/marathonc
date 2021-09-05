#include <unistd.h>

void mx_printchar(char c);
void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);
int mx_strlen(char *s);

int main(int argc, char *argv[]) {
    while (*argv[0])
        argv[0]++;
    while(mx_strchr(argv[0]-1, 47) == NULL)
        argv[0]--;
    mx_printstr(argv[0]);
    mx_printchar('\n');
    return argc;
}
