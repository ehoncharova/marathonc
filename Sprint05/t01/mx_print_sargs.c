void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
void mx_printchar(char c);

int main (int argc, char** argv) {
    char *temp;
    
    if(argc < 1) {
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        for (int y = i + 1; y < argc; ++y) {
            if (mx_strcmp(argv[i], argv[y]) > 0) {
                temp = argv[y];
                argv[y] = argv[i];
                argv[i] = temp;
            }
        }
    }
    for (int i = 1; i < argc; ++i) {
        mx_printstr(argv[i]);
    }
    return 0;
}
