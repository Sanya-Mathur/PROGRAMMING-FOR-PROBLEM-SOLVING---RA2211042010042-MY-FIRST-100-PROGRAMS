
#include <stdio.h>
int main()
{
  printf("RA2211042010042\n");
  
  float a,b,cube;

 
  printf("Enter a and b for (a+b)^3");
  scanf("%f%f",&a,&b);

 
 
  cube= (a*a*a) + (b*b*b) + (3*a*a*b)+(3*a*b*b) ;
  printf("cube %f",cube);

  return 0;
}
