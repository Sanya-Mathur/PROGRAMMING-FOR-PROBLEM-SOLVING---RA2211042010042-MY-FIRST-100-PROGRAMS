#include <stdio.h>

int main()
{
   printf("RA2211042010042\n");
  int number, digit;

  printf("Enter an integer: ");
  scanf("%d", &number);

  digit=number%10;
  printf("Unit's Digit = %d", digit);

return 0;
}
