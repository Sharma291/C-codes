#include <stdio.h>
int input();
void output(float);
int main()
{
    float result;
    int choice, num;
    printf("Press 1 to check whether number is positive or negative\n");
    printf("Press 2 to check whether number is even or odd\n");
    printf("Enter your choice : ");
    choice = input();
      
    switch (choice) {
    case 1: {
        printf("Enter a number to check whether its positive or negative : ");
        num = input();
        if(num>0)
        printf("The number %d is positive",num);
        else if (num<0)
        printf("The number %d is negative",num);
        else
        printf("The number is 0");
        break;
    }
    case 2: {
        printf("Enter number to check whether number is even or odd : ");
        num = input();
        if(num %2 ==0 && num !=0)
        printf("The number %d is an even number",num);
        else if(num%2 !=0 && num !=0)
        printf("The number %d is an odd number",num);
        else
        printf("The number is 0");
        break;
    }
    return 0;
    }}
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