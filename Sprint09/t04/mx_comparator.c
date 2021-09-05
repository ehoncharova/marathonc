#include <stdio.h>
#include <stdbool.h>

bool compare(int arr_el, int x) {
    return arr_el == x;
}

int mx_comparator(const int *arr, int size, int x, bool(*compare)(int, int)) {

    for (int i = 0; i < size; i++) {
        if (compare(arr[i], x))
            return i;
    }
    return -1;
}
