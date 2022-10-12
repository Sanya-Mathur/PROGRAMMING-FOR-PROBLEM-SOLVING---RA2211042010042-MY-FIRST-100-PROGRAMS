#include <stdio.h>
main() 
{
  int number;
  printf("Enter the value of number: ");
  scanf("%d",&number);
  if (number%5 == 0) 
  {
    printf("%d is divisible by 5.", number);
  }
else
{
  printf(“ %d is not divisible by 5 .”,number);
}
} 


