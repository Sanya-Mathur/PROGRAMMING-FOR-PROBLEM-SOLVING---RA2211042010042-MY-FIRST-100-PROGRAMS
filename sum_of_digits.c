 #include <stdio.h>
main() 
{  
  printf("RA2211042010042\n");
  int n, d, m; //variable to store number n and m and d is digit extracted
  int sum = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  m = n;
  while(n != 0);
  {
    d = n % 10;
    sum = sum  + d;
    n = n / 10;
  }
  printf("Sum of digits of %d = %d", m, sum);
} 












