#include <stdio.h>
int main()
{   
  printf("RA2211042010042\n");
  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c alphabet.", c);
    else
        printf("%c not alphabet.", c);

    return 0;
}










