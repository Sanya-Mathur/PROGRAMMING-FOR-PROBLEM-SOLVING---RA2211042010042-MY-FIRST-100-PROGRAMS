#include <stdio.h>
main()
{ printf("RA2211042010042\n");
  float radius,height;
  printf("enter radius and height of cylinder");
  scanf("%f%f",&radius,&height);
  float volume=3.14*radius*radius*height;
  printf("The volume=%f",volume);
}
