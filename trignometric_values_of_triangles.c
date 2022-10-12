
#include <math.h>
#include <stdio.h>
void main() 
{  printf("RA2211042010042\n");
  float base, height,hypotenuse,sinx,cosx,tanx;
   printf("Enter base and height values of triangles: ");
  scanf("%f%f",&base, &height);
  hypotenuse=sqrt((base*base)+(height*height));
  sinx=height/hypotenuse;
  cosx=base/hypotenuse;
  tanx=height/base;
  
 
  printf("hypotenuse= %f\n",hypotenuse);
  printf("sinx= %f\n",sinx);
  printf("cosx= %f\n",cosx);
  printf("tanx= %f\n",tanx);
}

