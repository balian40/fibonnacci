#include<stdio.h>

int main ()
{
    long a = 0;
    long b = 1 ;
    long c;
    int d = 91 ;
    int i = 0 ;
    printf("%ld\n%ld\n",a,b);
    while( i < d)
    {
        i++;
        c= a + b ;
        a = b ;
        b = c ;
        printf("%ld\n",b);
    }
}