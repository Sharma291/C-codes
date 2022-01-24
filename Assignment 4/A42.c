//Program to multiply and divide a number by 4 using bitwise operators
#include<stdio.h>
int main(){
    long number1,number2,number3;
    printf("Enter the value of number1 : ");
    scanf("%ld",&number1);

    number2=number1<<2;
    number3=number1>>2;
    printf("%ld x 4 = %ld\n",number1,number2);
    printf("%ld / 4 = %ld",number1,number3);
    
    return 0;
}