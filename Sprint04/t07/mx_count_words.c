#include <stdio.h>
#include <stdbool.h>
int mx_count_words(const char *str, char delimiter) {
    int word = 0;
    bool state = true;
    unsigned wordcount = 0;
    
    while (str[word]) {
            if (str[word] == delimiter) {
                state = true;}
                else if (state == true) {
                state = false;
                ++wordcount;
            }
            ++word;
            }
            return wordcount;
    }
            
// int main() {
// char str[] = " follow * the white rabbit";
// printf("%d", mx_count_words(str, '*'));
// return 0;
// }
