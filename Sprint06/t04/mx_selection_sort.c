#include <stdio.h>

int mx_strlen(char *s);
int mx_strcmp(const char *s1, const char *s2);

int mx_selection_sort(char **arr, int size) {
    
    char *temp;
    int count = 0;
    int tempnum = 0;
        for (int i = 0; i < size; i++) {
            temp = arr[i];
            for(int j = i + 1; j < size; j++) {
                if(mx_strlen(temp) > mx_strlen(arr[j]) ||
                 (mx_strlen(temp) == mx_strlen(arr[j]) &&
                 mx_strcmp(temp,arr[j]) > 0)) {
                    temp = arr[j];
                    tempnum = j;
                }
            }
            if(arr[i] != temp) {
                arr[tempnum] = arr[i];
                arr[i] = temp;
                count++;
            }
        }
    return count;
}
