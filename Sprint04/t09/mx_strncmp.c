#include <stdio.h>
int mx_strncmp( const char * s1, const char * s2,int n )
{
    while ( n && *s1 && ( *s1 == *s2 ) )
    {
        ++s1;
        ++s2;
        --n;
    }
    if ( n == 0 )
    {
        return 0;
    }
    else
    {
        return ( *(unsigned char *)s1 - *(unsigned char *)s2 );
    }
}

//int main(){
//    int c= mx_strncmp("zfz", "gfg", 3); 
// printf("%d",c);
//   return 0;
//}
