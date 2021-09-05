double mx_pow (double a, unsigned int pow) {
    double b=1;
    unsigned int i=0;
    while (i!= pow){
        b*=a;
        i++;
    }
    return b;
}
