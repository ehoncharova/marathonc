#include <stdio.h>

void mx_arr_rotate(int *arr, int size, int shift) {
    int temp;
    if (shift > 0) {
        for(int i = 0; i < shift; i++) {
            for(int j = 0; j < size; j++) {
                temp = arr[j];
                arr[j] = arr[0];
                arr[0] = temp;
            }
        }
    }
    else {
        for(int i = 0; i < -shift; i++) {
            for(int j = size - 1; j >= 0; j--) {
                temp = arr[j];
                arr[j] = arr[size - 1];
                arr[size - 1] = temp;
            }
        }
    }
}

// int main() {
// int arr[5] = {1, 2, 3, 4, 5};
// mx_arr_rotate(arr, 5, -2);
// for(int i = 0; i < 5; i++)
// printf("%d ", arr[i]);
// }
