#include <stdio.h>
int mx_factorial_iter(int n){
    if (n == 0 || n == 1)
        return 1;
    if (n < 0 || n > 12)
        return 0;
    int res = 1, i = 1;
    while (i <= n)
	{
		res = i * res;
		i++;
	}
	return (res);
}

//int main() {
//int m= mx_factorial_iter(2);
// printf("%d",m);
//     return 0;
// }
