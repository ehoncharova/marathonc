#include <stdio.h>
  
int mx_popular_int(const int *arr, int size) {
        int max;
        int temp_count = 0;
        int count = 0;

        for(int i = 0; i <= size; i++) {
                for(int y = 0; y <= size; y++) {
                        if( arr[i] == arr[y] ) {
                                temp_count++;
                        }
                }
                if( temp_count > count ) {
                        max = arr[i];
                        count = temp_count;
                }
                temp_count = 0;
        }
        return max;
}
