#include <stdio.h>
#include <unistd.h>
void mx_printchar(char c[]);

void mx_print_alphabet() {
    char alph[27];
    char ALPH[27];
    int i, k;
    for(i = 0;i < 26;i++) {
        alph[i] = 'a' + i;
    }
    alph[i]='\0';
        for(k = 0;k < 26;k++) {
        ALPH[k] = 'A' + k;
    }
    ALPH[k]='\0';
    for(k=0;k < 26;k++) {
          mx_printchar(&ALPH[k]);
          mx_printchar(&alph[k+1]);
          k = k + 1;
    }
    write(1, "\n",1);
}

