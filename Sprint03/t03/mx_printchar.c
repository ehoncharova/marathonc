#include <unistd.h>
void mx_printchar(char s){
    write(1,&s,1);
}
