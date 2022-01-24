//Program to swap two variables without using 3rd variable
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the values of a and b : ");
    scanf("%d %d",&a,&b);
    
    a=a+b;//Here a acquires the value of sum of a and b
    b=a-b;//Here b acquires the value of a-b,the previous value of a
    a=a-b;//Finally a acquires the value of a-b , the previous value of b

    printf("After swapping,the value of a is : %d",a);
    printf("\nAfter swapping,the value of b is : %d",b);
    return 0;
}