//C program to design calculator with basic operations using switch
#include <stdio.h>
int main() {

  char oper;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &oper);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);
  switch (oper) {
    case '+':
      printf("%.2lf + %.2lf = %.2lf", first, second, first + second);
      break;
    case '-':
      printf("%.2lf - %.2lf = %.2lf", first, second, first - second);
      break;
    case '*':
      printf("%.2lf * %.2lf = %.2lf", first, second, first * second);
      break;
    case '/':
      printf("%.2lf / %.2lf = %.2lf", first, second, first / second);
      break;
    default:
      printf("Error! operator is not correct");
  }
  printf("\n\nVignesh Sharma\n21B037");

  return 0;
}