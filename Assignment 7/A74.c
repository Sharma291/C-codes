//Program to check whether entered number is palindrome or not
#include<stdio.h>
int main(){
    int n, reversed = 0, remainder, temp;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp=n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (temp == reversed)
        printf("%d is a palindrome.", temp);
    else
        printf("%d is not a palindrome.",temp);
    return 0;
}