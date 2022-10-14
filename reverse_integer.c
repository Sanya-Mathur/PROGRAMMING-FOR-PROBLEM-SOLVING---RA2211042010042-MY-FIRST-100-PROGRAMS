#include <stdio.h>

main()
{
   printf("RA2211042010042\n");
  int number, reverse = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &number);

  while (number != 0) 
  {
    remainder = number % 10;
    reverse = reverse * 10 + remainder;
    number /= 10;
  }

  printf("Reversed number = %d", reverse);

}
