//Program to find sum of individual digits of a positive integer
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a positive integer : "); 
    scanf("%d",&n);

    while(n>0)  
    {
        sum=sum+n%10;   // sum + remainder value
        n=n/10;
    }
    printf("Sum of individual digits of the entered positive integer is : %d",sum);
    return 0;
}