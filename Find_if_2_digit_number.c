#include <stdio.h>

int main()
{
     printf("RA2211042010042\n");
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 10 )
        printf("1 digit");
    else if (number >=10 && number < 100)
        printf("2 digits");
   else
     printf("error");
}













