#include <stdio.h>
void mx_printchar(char s);

void mx_cube(int n) {
   if (n <= 1)
      return;
   int b;
   int i;
   int minus = n * 2;
   int slash = 0;
        //FAR EDGE
     for (i = 0; i < n / 2 + 1; i++) {
        mx_printchar(' ');
     }
     mx_printchar('+');
     for (i = 1; i <= minus; i++) {
        mx_printchar('-');
     }
     mx_printchar('+');
     mx_printchar('\n');
       //TOP SIDE
       int p = 0;
   while (slash < n / 2) {
       for (i = 0; i < n / 2 - p; i++) {
        mx_printchar(' ');
       }
        mx_printchar('/');
        p++;
       for (i = 1; i <= minus; i++) {
        mx_printchar(' ');
       }
       mx_printchar('/');
       for (b = n * 2 + 3; b < (n * 2 + 3) + slash; b++) {
               mx_printchar(' ');
            }
       mx_printchar('|');

       mx_printchar('\n');
   slash++;
   }
        //NEAR EDGE
     mx_printchar('+');
     for (i = 1; i <= minus; i++) {
        mx_printchar('-');
     }
     mx_printchar('+');
     for (b = n * 2 + 3; b < (n * 2 + 3) + slash; b++) {
               mx_printchar(' ');
            }
      mx_printchar('|');
      mx_printchar('\n');
      //FRONT SIDE
      int end_y = n % 2 == 0 ? n / 2 : (n / 2) + 1;
      for (int y = 0; y < end_y; ++y) {
         for (int x = 0; x < (n * 2) + 2 + (n / 2) + 1; ++x) {
            if (y == end_y - 1) {
               if (x == 0)
                  mx_printchar('|');
               else if (x == n * 2 + 1)
                  mx_printchar('|');
               else if (x == (n * 2) + 2 + n / 2)
                  mx_printchar('+');
               else
                  mx_printchar(' ');
            }

            else if (y >= 0) {
                  if (x == 0)
                     mx_printchar('|');
                  else if (x == n * 2 + 1)
                     mx_printchar('|');
                  else if (x == (n * 2) + 2 + n / 2)
                     mx_printchar('|');
                  else
                     mx_printchar(' ');
            }
         }
            mx_printchar('\n');
         }
   //BOTTOM OF FRONT SIDE
   slash = 0;
   p = 1;
   while (slash < n / 2) {
      mx_printchar('|');
      for (i = 1; i <= minus; i++) {
        mx_printchar(' ');
      }
        mx_printchar('|');
      for (i = minus + 3; i < (minus + 3) + (n / 2 - p); i++) {
        mx_printchar(' ');

      }
      mx_printchar('/');
      p++;
      mx_printchar('\n');
   slash++;
   }
     //BOTTOM EDGE
    mx_printchar('+');
     for (i = 1; i <= minus; i++) {
        mx_printchar('-');
     }
     mx_printchar('+');
     mx_printchar('\n');
}

// int main() {
//     mx_cube(2);
//     return 0;
// }
