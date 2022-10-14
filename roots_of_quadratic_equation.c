#include <math.h>
#include <stdio.h>
int main()
{    

    printf("RA2211042010042\n");

    float a, b, c, discriminant, x1, x2 ;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) 
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("x1 = %f and x2 = %f", x1, x2);
    }
    else if (discriminant == 0)
    {
        x1 = x2 = -b / (2 * a);
        printf("x1 = x2 = %f;", x1);
    }
    else
    {
        
        printf("No real roots");
    }

    return 0;
} 







