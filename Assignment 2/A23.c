//Program to compute quotient and remainder
#include<stdio.h>
int main(){
    int dividend,divisor,quotient,remainder;

    printf("Enter the value of dividend : ");
    scanf("%d",&dividend);
    printf("Enter the value of divisor : ");
    scanf("%d",&divisor);

    quotient=dividend/divisor;
    remainder=dividend%divisor;

    printf("The value of quotient is : %d\n",quotient);
    printf("The value of remainder is : %d",remainder);

    return 0;
}