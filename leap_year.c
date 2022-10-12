#include <stdio.h>
main() {
   printf("RA2211042010042\n");
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
  
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   
   else {
      printf("%d is not a leap year.", year);
   }

  
}



