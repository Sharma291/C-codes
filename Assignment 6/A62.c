//Program to find LCM and HCF of two numbers
#include <stdio.h>
int main(){
    int a, b, num1, num2, temp,hcf, lcm;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    num1 = a;
    num2 = b;
    while (num2 != 0){
    temp = num2;
    num2 = num1 % num2;
    num1 = temp;
    }
    hcf = num1; 
    //  HCF(a, b) * LCM(a, b) = a*b
    lcm = (a*b) / hcf;
  
    printf("HCF of %d and %d is %d\n", a, b, hcf);
    printf("LCM of %d and %d is %d", a, b, lcm);
    return 0;
}