//Program to find sum of first N natural numbers,N taken from the user
#include<stdio.h>
int main(){
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
        sum += i;

    printf("Sum of first %d natural numbers = %d",n, sum);
    return 0;
}