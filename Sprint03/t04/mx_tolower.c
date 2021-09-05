int mx_tolower (int c) {
    if (c >=97 && c<=122){
        return c;
    }
    else{
        if (c>=65 &&c<=90){
            return c+=32;
        }
        else
        return 0;
}
}
