#include <stdlib.h>
int *mx_copy_int_arr(const int *src, int size){
    if(size <= 0){
        return NULL;
    }
  
    int *dest = malloc(size * sizeof(int));
    int *dest_ptr = dest;

    for (const int *src_ptr = src; src_ptr < (src + size);src_ptr++, dest_ptr++) {
        *dest_ptr = *src_ptr;
    }
  return dest;
}
