#include <stdio.h>
int main() {
    int number, i, sum = 0;//i is a counter

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    for (i = 1; i <= number; ++i) {
        sum =sum+ i;
    }

    printf("Sum = %d", sum);
    return 0;
}
