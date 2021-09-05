void mx_printchar(char c);
void mx_printint(int n){
    int a=0;
    long int length=0;
    long int x=1;

    if(n<0){
        n*=-1;
        mx_printchar(45);
    }
    if(n!=0){
        for(int i=n; i!=0; i/=10){
            length++;
            x*=10;
        }
    }
    else{
        length=1;
        x=10;
    }
    for(int y=0; y!=length; y++){
        x/=10;
        if(x!=0){
            a=((n/x)%10)+48;
            mx_printchar(a);
        }
    }
}
