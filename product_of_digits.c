#include<stdio.h>
int main()
{
   printf("RA2211042010042\n");
    int num, product=1, rem;
    printf("Enter number: ");
    scanf("%d", &num);
    while(num>0)
    {
        rem = num%10;
        if(rem!=0)
            product = product*rem;
        num = num/10;
    }
    printf("\nProduct = %d", product);
    return 0;
}
