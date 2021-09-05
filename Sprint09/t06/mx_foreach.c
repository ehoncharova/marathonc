void f(int a);

void mx_foreach(const int *arr, int size, void(*f)(int)) {
    int i = 0;

    while (i < size) {
        f(arr[i++]);
    }
}
