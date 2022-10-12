#include <stdio.h>
  main() 
{   printf("RA2211042010042\n");
  int a;
  printf("Please enter values for a(any number): ");
  scanf("%d",&a);
  int b=a;
  printf("\nValue of a : %d", a);
  printf("\npre increment ++a: %d", ++a);
  
  printf("\npost increment a++: %d", b++);
  printf("\nValue of a now after a++: %d" ,b);
  
}

