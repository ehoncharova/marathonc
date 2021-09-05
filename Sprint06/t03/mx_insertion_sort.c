#include <stdio.h>

int mx_strlen(char *s);

int mx_insertion_sort(char **arr, int size) {
    int i = 0;
    int j = 0;
    char *temp;
    int count = 0;
    for (i = 0; i < size; i++) {
        temp = arr[i];
        j = i - 1;
        for ( j = i; j > 0; j--) {
            if (mx_strlen(arr[j]) < mx_strlen(arr[j - 1])) {
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                count++;
            }
            else break;
        }
    }
    return count;
}

// int main(){
// char *arr[] = {"abc", "ab", "aaaaa", "aaaa", "aaa"};
// printf("%d", mx_insertion_sort(arr, 5));
// return 0;
// }
