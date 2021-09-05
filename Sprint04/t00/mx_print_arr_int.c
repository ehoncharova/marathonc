#include <unistd.h>
void mx_printint(int n);

void mx_print_arr_int (const int *arr, int size){
    int loop;

    for(loop = 0; loop < size; loop++){
    mx_printint(*arr);
    arr++;
    write(1,"\n",1);
}
}
