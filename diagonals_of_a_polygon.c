#include <math.h>
#include <stdio.h>
int main()
{    

    printf("RA2211042010042\n");

    int n;
    int diagonals;
    printf("For n sided polygon enter n");
    scanf("%d",&n);
    diagonals=(n)*(n-3)/2;
    printf("%d",diagonals);
    return 0;
} 







