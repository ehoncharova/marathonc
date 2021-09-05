void mx_sort_arr_int(int *arr, int size) {
int increment = 3;
  
  while (increment > 0) {
    for (int i = 0; i < size; i++) {
      int j = i;
      int temp = arr[i];

      while ((j >= increment) && (arr[j - increment] > temp)) {
        arr[j] = arr[j - increment];
        j = j - increment;
        }
        arr[j] = temp;
    }
    if (increment > 1) {
      increment = increment / 2;
    }
    else if (increment == 1) {
      break;
    }
  }
}
