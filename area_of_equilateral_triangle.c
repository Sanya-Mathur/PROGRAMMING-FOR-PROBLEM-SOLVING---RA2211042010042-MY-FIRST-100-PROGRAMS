#include <stdio.h>
int main()
{
  printf("RA2211042010042\n");
  float side, area;
  printf("Enter Side");
  scanf("%f",&side);
  area = 1.732 * side * side ;
  printf("Area of Triangle is: %f",area);

  return 0;
}
