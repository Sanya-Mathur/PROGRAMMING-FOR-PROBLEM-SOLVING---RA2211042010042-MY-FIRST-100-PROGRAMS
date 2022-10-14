#include <stdio.h>

int main()
{
     printf("RA2211042010042\n");
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
        printf("negative number.");
    else if (number > 0)
        printf("positive number.");
    else
        printf("0");

    return 0;
}













