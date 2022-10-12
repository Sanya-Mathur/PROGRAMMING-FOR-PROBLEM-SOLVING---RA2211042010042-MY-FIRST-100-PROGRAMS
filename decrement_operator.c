#include <stdio.h>
  main() 
{
  int a;
  printf("Please enter values for a(any number): ");
  scanf("%d",&a);
  int b=a;
  printf("\nValue of a : %d", a);
  printf("\npre decrement --a: %d", --a);
  
 printf("\npost decrement a--: %d", b--);
  printf("\nValue of a now after a--: %d" ,b);
  
}

