int mx_strlen(char *s) {
    int size = 0;
    while (*s != '\0') {
        size++;
        s++;
    }
    return size;
}
