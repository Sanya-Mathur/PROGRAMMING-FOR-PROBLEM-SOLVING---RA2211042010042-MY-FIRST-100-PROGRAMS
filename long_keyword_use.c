#include <stdio.h>
int main()
{
    printf("RA2211042010042\n");
    int a;
    long b;  
    double c;
    long double d;

    printf("Size of int = %zu bytes \n", sizeof(a));
    printf("Size of long int = %zu bytes\n", sizeof(b));
    printf("Size of double = %zu bytes\n", sizeof(c));
    printf("Size of long double = %zu bytes\n", sizeof(d));
    
    return 0;
}

