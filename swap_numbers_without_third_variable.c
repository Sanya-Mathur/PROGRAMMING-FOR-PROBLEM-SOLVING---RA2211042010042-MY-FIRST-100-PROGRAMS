#include <stdio.h>
main() 
 {
   printf("RA2211042010042\n");
  int number1, number2;
  printf("\nEnter values for number1 and number2: ");
  scanf("%d%d",& number1,& number2);
  printf("\nBefore swapping value of number1=%d number2=%d", number1, number2);
  number1= number1+ number2;
  number2= number1- number2;
  number1= number1- number2;
  
  printf("\nAfter swapping value of number1=%d and number2=%d", number1, number2);
} 
