//Program to convert temperature from fahrenheit to celsius and vice versa
#include <stdio.h>
int main(){
    float a,b;
    float temp1,temp2;
    printf("Enter the value of the temperature in celsius : ");
    scanf("%f", &a);

    temp1 = (1.8 * a + 32);
    printf("The value of temperature in fahrenheit is : %f",temp1);

    printf("\n\nEnter the value of temperature in fahrenheit : ");
    scanf("%f",&b);

    temp2=((5)*(b-32))/9;
    printf("The value of temperature in celsius is : %f",temp2);

    return 0;
}