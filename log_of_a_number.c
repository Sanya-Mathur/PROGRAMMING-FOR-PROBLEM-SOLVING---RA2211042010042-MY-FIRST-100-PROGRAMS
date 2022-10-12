#include <stdio.h>
#include <math.h>
int main()
    
{   int number;
    printf("RA2211042010042\n");
    printf("Enter number");
  scanf("%d",&number);
    double result;

    result = log(number);
    printf("log(%d) = %lf", number, result);

    return 0;
}
