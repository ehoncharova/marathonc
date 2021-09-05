#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size) {
    int count = 0;
    char *temp;
    int ready = 0;
    int i = 0;
    while (ready != size) {
        if (mx_strcmp(arr[i],arr[i+1]) > 0) {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            count++;
            ready = 0;
        }
        else ready++;
        i++;
        if (i + 1 == size) i = 0;
    }
    return count;
}

// int main() {
// char *arr[] = {"abc", "xyz", "ghi", "def"};
// printf("%d", mx_bubble_sort(arr, 4));
// }
