#include <stdio.h>
main() 
{
   
  printf("RA2211042010042\n");
  int number1, number2, number3, number4;
  printf("Enter the values of number1, number2, number3 and number4: ");
  scanf(""%d%d%d%d",& number,& number2,& number3,& number4);
  if (number1 > number2 && number1> number3 && number1> number4) 
  {
    printf("%d is greatest.", number1);
  }
  else if (number2 > number3 && number2 > number4) 
  {
    printf("%d is greatest.", number2);
  }
  else if (number3 > number4) 
  {
    printf("%d is greatest.", number3);
  }
  else
  {
    printf("%d is greatest.", number4);
  }
} 
