//Program to swap two numbers using 3rd variable
#include<stdio.h>
int main() {
  float first, second, a;
  printf("Enter first number: ");
  scanf("%f", &first);
  printf("Enter second number: ");
  scanf("%f", &second);

  // value of first is assigned to a
  a= first;

  // value of second is assigned to first
  first = second;

  // value of a (initial value of first) is assigned to second
  second = a;

  printf("\nAfter swapping, first number = %f\n", first);
  printf("After swapping, second number = %f", second);
  return 0;
}