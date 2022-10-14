
#include <stdio.h>
int main()
{
  printf("RA2211042010042\n");
 
    float fahrenheit, celsius;
    printf("Enter Temperature Value (in Fahrenheit):\n");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit-32)/1.8;
    printf(" Celsius= %f", celsius);
    return 0;
}
