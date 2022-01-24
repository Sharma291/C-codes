//Program to find factorial of a number
#include<stdio.h>
int main(){
    int fact,i,N,sum;
    printf("Enter a positive integer : ");
    scanf("%d",&N);

    for(fact=1,i=1;i<=N;i++)
    fact=fact*i;
    printf("The value of %d! is : %d",N,fact);

    return 0;
}