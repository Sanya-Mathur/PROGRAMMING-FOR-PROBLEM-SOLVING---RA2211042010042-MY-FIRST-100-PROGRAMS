#include<stdio.h>
int main()
{   
  printf("RA2211042010042\n");
 
    float kg, g;
    printf("Enter weight in Kilogram: ");
    scanf("%f", &kg);
    g = kg*1000;
    printf("Equivalent weight in Gram = %f", g);
    return 0;
}
