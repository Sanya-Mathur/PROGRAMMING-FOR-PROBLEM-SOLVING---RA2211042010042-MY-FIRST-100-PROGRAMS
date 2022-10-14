#include <stdio.h>
int main()
{
printf("RA2211042010042\n");
   int i, j, r;
 r=4;//r is number of rows
   for (i = 1; i <= r; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}
