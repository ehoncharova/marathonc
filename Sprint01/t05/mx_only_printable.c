#include <stdio.h>
#include <unistd.h>

void mx_printchar(char c);

void mx_only_printable(void) {
	for (int i=126; i!=31; i--) {
		mx_printchar(i);
	}
	write(1,"\n",1);
}

