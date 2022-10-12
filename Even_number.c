#include <stdio.h>
main() 
{ 
  printf("RA2211042010042\n");
  int number;
  printf("Enter the value of number: ");
  scanf("%d",&number);
  if (number%2 == 0) 
  {
    printf("%d is even number.", number);
  }
else
{
  printf(“%d is odd number .”,number);
}
} 
