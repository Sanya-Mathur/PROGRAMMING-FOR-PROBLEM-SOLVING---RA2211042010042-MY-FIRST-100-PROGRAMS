#include <stdio.h>
main()
{ printf("RA2211042010042\n");
  float number,percent,percentaged_value;
  printf("Enter given number");
  scanf("%f",number);
  printf("Enter percentage");
   scanf("%f",percent);
   percentaged_value=(percent/100)*number;
   printf("%f%f%f",percent,number,percentaged_value);
}
