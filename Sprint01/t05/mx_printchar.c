#include <stdio.h>
#include <unistd.h>
void mx_only_printable(void);

void mx_printchar(char c) {
	write(1,&c,1);
}
