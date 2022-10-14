#include <stdio.h>

int main() 
{
  
  printf("RA2211042010042\n");
  char operation;
  double number1, number2;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &operation);
  printf("Enter two operands: ");
  scanf("%d %d", &number1, &number2);

  switch (op) {
    case '+':
      printf("%d+ %d = %d", number1,number2,number1+number2);
      break;
    case '-':
      printf("%d - %d = %d", number1-number2,number1-number2);
      break;
    case '*':
      printf("%d* %d= %d", number1,number2,number1*number2);
      break;
    case '/':
      printf("%d / %d = %d", number1, number2, number1 / number2);
      break;
    
    default:
      printf("Error! operator is not correct");
}

  return 0;
}










