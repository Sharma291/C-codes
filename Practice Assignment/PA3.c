#include <stdio.h>
int input();
void output(float);
int main()
{
    float result;
    int choice, num1,num2,num3,num4;
    printf("Press 1 to enter marks in 4 subjects\n");
    printf("Press 2 to calculate the average\n");
    printf("Press 3 to calculate highest marks\n");
    printf("Enter your choice : ");
    choice = input();
      
    switch (choice) {
    case 1: {
        printf("Enter marks of 4 subjects : ");
        num1 = input();
        num2 = input();
        num3 = input();
        num4 = input();
        printf("The marks are : %d,%d,%d,%d",num1,num2,num3,num4);
        break;
    }
    case 2: {
        printf("Enter numbers to calculate average : ");
        num1 = input();
        num2 = input();
        num3 = input();
        num4 = input();
        result = num1 + num2 +num3 +num4;
        printf("Average = ");
        output(result);
        break;
    }
    case 3: {
        printf("Enter the numbers to calculate highest marks : ");
        num1 = input();
        num2 = input();
        num3 = input();
        num4 = input();
        
        (num1>num2 && num1>num3 && num1>num4)?(printf("The highest marks are %d",num1))
        :(num2>num3 && num2>num4)?(printf("The highest marks are %d",num2))
        :(num3>num4)?(printf("The highest marks are %d",num3))
        :(printf("The highest marks are %d",num4));
        break;
    }
    default:
        printf("wrong Input\n");
    }
    return 0;
}
int input()
{
    int number;
    scanf("%d", &number);
    return (number);
}
  
void output(float number)
{
    printf("%f", number);
}