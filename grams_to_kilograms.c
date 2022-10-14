#include<stdio.h>
int main()
{   
  printf("RA2211042010042\n");
 
    float kg, g;
    printf("Enter weight in gram: ");
    scanf("%f", &g);
    kg = g/1000;
    printf("Equivalent weight in kilogram = %f", kg);
    return 0;
}
